// ME25B070 - Manaswi Gaur

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, A0, A1, A2, A3);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
}

int ldr_value;

void loop() {
  ldr_value = digitalRead(A4);
  digitalWrite(7, HIGH);
  Serial.println(ldr_value);

  if(ldr_value){
    lcd.setCursor(0, 0);
    lcd.clear();
    lcd.print("Interference");
    lcd.setCursor(0, 1);
    lcd.print("Detected!");
    tone(6, 500);
  }
  else{
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("No Interference!");
    noTone(6);
  }
  delay(10);
}