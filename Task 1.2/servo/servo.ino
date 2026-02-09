// ME25B070 - Manaswi Gaur

#include <Servo.h>

Servo myServo;
void setup()
{
  myServo.attach(3);
  Serial.begin(9600);
}

void loop()
{
  myServo.write(180);
  delay(2000);
  myServo.write(0);
  delay(2000);
}