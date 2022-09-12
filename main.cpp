#include <Arduino.h>
#define led_pin 13;
#define in_pin 7;
int var;
void setup() {
  pinMode(led_pin,OUTPUT);
  pinMode(in_pin,INPUT);
  // put your setup code here, to run once:
}

void loop() {
var=digitalRead(in_pin);
digitalWrite(led_pin,var);
  // put your main code here, to run repeatedly:
}