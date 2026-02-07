// ME25B070 - Manaswi Gaur

void setup()
{
}

void loop()
{
  for (int i = 0; i<=255; i++){
  	analogWrite(3, i);
  	delay(2);
  }
  for (int i = 0; i<=255; i++){
  	analogWrite(3, 255-i);
  	delay(2);
  } 
}