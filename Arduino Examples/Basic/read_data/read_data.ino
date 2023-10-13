// Open Plant Bioelectric Sensor v2.0 PIN LAYOUT
// A0 - リファレンス用
// A1 - 測定値用
// A2 - 可変抵抗計算用
// A4,A5 - I2C (optional)

#define VCC        (5.0)
#define ADCUNIT    (VCC / 1024.0) // V

void setup() {
  Serial.begin(9600);
}

void loop() {
  // analogReadの平均値を算出（電源ノイズを低減）
  long totalA0 = 0, totalA1 = 0, totalA2 = 0;
  float averageA0 = 0, averageA1 = 0, averageA2 = 0;

  for(int i = 0; i < 40; i++){
    analogRead(A0);
    totalA0 += analogRead(A0);
    analogRead(A1);
    totalA1 += analogRead(A1);
    analogRead(A2);
    totalA2 += analogRead(A2);
    delay(25);
  }
  averageA0 = (float)totalA0 / 40;
  averageA1 = (float)totalA1 / 40;
  averageA2 = (float)totalA2 / 40;

  // 増幅度を算出
  float Vx = averageA2 * ADCUNIT;
  float Rg = Vx * 10 / (VCC - Vx);
  float Gain = 1 + 49.4 / Rg;

  // 実際の生体電位を算出
  float Vref = averageA0 * ADCUNIT;
  float Vmeasure = averageA1 * ADCUNIT;
  float Vreal = (Vmeasure - Vref) / Gain;

  // 送信
  Serial.print("測定値[V]:");
  Serial.print(String(Vmeasure, 5));
  Serial.print(",");
  Serial.print("実際の生体電位[V]:");
  Serial.print(String(Vreal, 5));
  Serial.println();
}
