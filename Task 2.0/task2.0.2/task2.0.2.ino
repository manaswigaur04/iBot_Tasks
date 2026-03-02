const int ledPin = 2; 
const int freq = 5000;
const int resolution = 8;
const int ledChannel = 0;

unsigned long previousTime = 0;
int brightness = 0;
int increment = 5;

void setup() {
  ledcAttach(ledPin, freq, resolution);
}

void loop() {
  unsigned long currentTime = millis();


  if (currentTime - previousTime >= 10) {
    previousTime = currentTime;

    brightness = brightness + increment;


    if (brightness <= 0 || brightness >= 255) {
      increment = -increment;
    }

    ledcWrite(ledPin, brightness); 
  }
}

