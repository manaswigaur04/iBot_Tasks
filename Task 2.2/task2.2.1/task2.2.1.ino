
#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  pinMode(23, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  SerialBT.begin("ESP32_Manaswi"); //Bluetooth device name
  Serial.println("Bluetooth has been turned on.");
}

void loop() {
  if (SerialBT.available()) {
    char val = SerialBT.read();
    Serial.println(val);
    if(val == '1'){
        digitalWrite(2, HIGH);
        digitalWrite(23, HIGH);
    }
    else if(val == '0'){
        digitalWrite(2, LOW);
        digitalWrite(23, LOW);
    }
  }
  delay(20);
}