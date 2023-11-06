/*
 * 
 * This software is released under the MIT License, and libraries used by these sketches 
 * are subject to their respective licenses.
 * See also: https://github.com/soracom-labs/arduino-dragino-unified/README.md
 *
*/
#define VCC        (5.0)
#define ADCUNIT    (VCC / 1024.0) // V

#define CONSOLE Serial
#define INTERVAL_MS (1000)
#define ENDPOINT "uni.soracom.io"
#define SKETCH_NAME "send_uptime_with_soracom"
#define VERSION "1.0"

/* for LTE-M Shield for Arduino */
#define RX 10
#define TX 11
#define BAUDRATE 9600
#define BG96_RESET 15

#define TINY_GSM_MODEM_BG96
#include <TinyGsmClient.h>

#include <SoftwareSerial.h>
SoftwareSerial LTE_M_shieldUART(RX, TX);
TinyGsm modem(LTE_M_shieldUART);
TinyGsmClient ctx(modem);

int reset_Pin = 7;


void setup() {
 CONSOLE.begin(9600);
 digitalWrite(reset_Pin, HIGH);
 pinMode(reset_Pin, OUTPUT);
 Serial.println("----- setup -----");
}

void loop() {
  float Vx = (float)analogRead(A2)*ADCUNIT;  // 読み取ったアナログ値を電圧に変換(Rxにかかる電圧)
  float Rg = Vx * 10 / (VCC - Vx);
  float G = 1 + 49.4 / Rg;
  float Vref = (float)analogRead(A0)*ADCUNIT;
  float Vmeasure = (float)analogRead(A1)*ADCUNIT;
  float Vreal = (Vmeasure - Vref) / G;

  CONSOLE.print("測定値[V]:");
  CONSOLE.print(String(Vmeasure, 5));
  CONSOLE.print(",");
  CONSOLE.print("実際の生体電位[V]:");
  CONSOLE.print(String(Vreal, 5));
  CONSOLE.println("");

/////////////

//LTE-Mで送信するために、型変換を行う
float v = Vmeasure;
float v2 = Vref;
float vr = Rg*100;
float kg = G;
float vreal = Vreal;

char payload[320];
char v_str[10], v2_str[10], vr_str[10], kg_str[10], vreal_str[10];

dtostrf(v, 1, 4, v_str); // 小数点以下2桁の浮動小数点数を文字列に変換
dtostrf(v2, 1, 4, v2_str);
dtostrf(vr, 1, 4, vr_str);
dtostrf(kg, 2, 0, kg_str); // 整数部分のみを文字列に変換
dtostrf(vreal, 1, 4, vreal_str);

sprintf_P(payload, PSTR("{\"V\":%s, \"V2\":%s, \"VR\":%s, \"KG\":%s, \"Vreal\":%s}"), v_str, v2_str, vr_str, kg_str, vreal_str);
  
CONSOLE.println(payload);

delay(2000);

//setup

CONSOLE.println();
  CONSOLE.print(F("Welcome to ")); CONSOLE.print(SKETCH_NAME); CONSOLE.print(F(" ")); CONSOLE.println(VERSION);

  CONSOLE.print(F("resetting module "));
  pinMode(BG96_RESET,OUTPUT);
  digitalWrite(BG96_RESET,LOW);
  delay(1000);
  digitalWrite(BG96_RESET,HIGH);
  delay(1000);
  digitalWrite(BG96_RESET,LOW);
  CONSOLE.println(F(" done."));

  LTE_M_shieldUART.begin(BAUDRATE);

  CONSOLE.print(F("modem.restart()"));
  modem.restart();
  CONSOLE.println(F(" done."));

  CONSOLE.print(F("modem.getModemInfo(): "));
  String modemInfo = modem.getModemInfo();
  CONSOLE.println(modemInfo);

delay(500);

  CONSOLE.print(F("waitForNetwork()"));
  while (!modem.waitForNetwork()) CONSOLE.print(".");
  CONSOLE.println(F(" Ok."));

  CONSOLE.print(F("gprsConnect(soracom.io)"));
  modem.gprsConnect("soracom.io", "sora", "sora");
  CONSOLE.println(F(" done."));

  CONSOLE.print(F("isNetworkConnected()"));
  while (!modem.isNetworkConnected()) CONSOLE.print(".");
  CONSOLE.println(F(" Ok."));

  CONSOLE.print(F("My IP addr: "));
  IPAddress ipaddr = modem.localIP();
  CONSOLE.println(ipaddr); 

  /* connect */
  if (!ctx.connect(ENDPOINT, 80)) {
    CONSOLE.println(F("failed."));
    delay(3000);
    return;
  }
  /* send request */
  char hdr_buf[120];
  ctx.println(F("POST / HTTP/1.1"));
  sprintf_P(hdr_buf, PSTR("Host: %s"), ENDPOINT);
  ctx.println(hdr_buf);
  ctx.println(F("Content-Type: application/json"));
  sprintf_P(hdr_buf, PSTR("Content-Length: %d"), strlen(payload));
  ctx.println(hdr_buf);
  ctx.println();
  ctx.println(payload);
  /* receive response */
  while (ctx.connected()) {
    String line = ctx.readStringUntil('\n');
    CONSOLE.println(line);
    if (line == "\r") {
      CONSOLE.println(F("Response header received."));
      //break;
    }
  }
  // NOTE: response body is ignore
  ctx.stop();

  delay(3000);
  Serial.println("----- RESET -----");

  
  //リセット
  digitalWrite(reset_Pin, LOW);
}
