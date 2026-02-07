void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

int sensor_value;

void loop() {
  // put your main code here, to run repeatedly:
  sensor_value = analogRead(A0);
  Serial.println(sensor_value);
  analogWrite(9, sensor_value*2);
  delay(100);
}
