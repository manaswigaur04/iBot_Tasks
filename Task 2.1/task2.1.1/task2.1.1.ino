#include <WiFi.h>
void setup() {
  Serial.begin(9600);
    WiFi.begin("MMMM", "00000000");
    while(WiFi.status() != WL_CONNECTED){
        delay(500);
        Serial.print(".");
    }
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}

void loop() {
  // put your main code here, to run repeatedly:

}
