// ME25B070 - Manaswi Gaur

void setup()
{
  pinMode(OUTPUT, 13);
}

void loop()
{
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
}