#include <math.h>

void setup() {

  Serial.begin(2000000);

}

void loop() {
  // read the input on analog pin 0:
  // analog reading (which goes from 0 - 1023)
  int sensorValue0 = analogRead(A0);
  // if you read more data
  // int sensorValue1 = analogRead(A1);
  
  // print out the value you read:
  Serial.println(sensorValue0);
  // if you read more data
  // Serial.print(","); 
  // Serial.println(sensorValue1);
  
  // sampling rate 1 / 10 milli sconds = 100Hz
  delay(10);
}
