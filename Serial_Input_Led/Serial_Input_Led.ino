const int LED_PINT = 4;
char input;

void setup() {
  Serial.begin(9600);
  pinMode(LED_PINT, OUTPUT);
}

void loop() {
  if(Serial.available() > 0) {
    input = Serial.read();
   
    if(input == 'l'){
      digitalWrite(LED_PINT, HIGH);
    } else if (input == 'd') {
      digitalWrite(LED_PINT, LOW);
    }
  }
}
