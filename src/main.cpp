#include <Arduino.h>
const int sensor = A0;
const int pwm = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pwm, OUTPUT); //use this if using digitalWrite
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = analogRead(sensor);
  Serial.print("input : ");
  Serial.println(input);
  int output = map(input,10,380,0,255);
  Serial.print("output : ");
  Serial.println(output);

  //using digital
  if(output < 100){
    digitalWrite(pwm,LOW);
  } else {
    digitalWrite(pwm,HIGH);
  }

  //using analog
  //analogWrite(pwm, output);
  delay(500);
}