void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

int last = 0;
int current = 0;
bool led = false;

void loop(){
  current = digitalRead(2);
  Serial.println(current);
  delay(10);
  if(current == 0 && last == 1){
    led = !led;
  }
  if(led){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }
  last = current;
}