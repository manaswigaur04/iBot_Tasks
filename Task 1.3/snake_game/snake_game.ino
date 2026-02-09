#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3D for 128x64
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
  delay(2000);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  // Display static text
  display.println("Hello, world!");
  display.drawCircle(64, 32, 10, WHITE);
  display.fillRect(10, 32, 20, 20, WHITE);
  display.display(); 
}

int direction = 0;
int x = 64;
int y = 32;

void loop() {
  if(x<=1){
    x = 120;
  }
  if(y<=1){
    y = 56;
  }
  x = x%128;
  y = y%64;

  if(!digitalRead(4)){
    direction = -1;
  }
  if(!digitalRead(5)){
    direction = 1;
  }
  if(!digitalRead(6)){
    direction = -2;
  }
  if(!digitalRead(7)){
    direction = 2;
  }

  
  display.clearDisplay();
  display.drawFastHLine(0, 0, 128, WHITE);
  for(int i = 0; i<128; i+=8){
    display.drawFastHLine(0, i, 128, WHITE);
  }
  
  display.drawFastVLine(0, 0, 64, WHITE);
  for(int i = 0; i<128; i+=8){
    display.drawFastVLine(i, 0, 64, WHITE);
  }
  display.fillRect(x, y, 8, 8, WHITE);
  display.display();
  if(direction == 1){
    x+=8;
  }
  else if(direction == -1){
    x-=8;
  }
  else if(direction == 2){
    y+=8;
  }
  else if(direction == -2){
    y-=8;
  }
  delay(100);
  
  

}