// ME25B070 - Manaswi Gaur

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, A0, A1, A2, A3);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Hello World!");
  lcd.setCursor(0, 1);
  lcd.print("iBot Club");
}

void loop() {
}