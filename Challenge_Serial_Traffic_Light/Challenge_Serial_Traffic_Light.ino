const int LED_RED_PIN = 11;
const int LED_YELLOW_PIN = 10;
const int LED_GREEN_PIN = 9;
char input;

void setup() {
  Serial.begin(9600);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
}

void loop() {
  if(Serial.available() > 0) {
    input = Serial.read();
   
    switch(input)
    {
      case 'v':
        digitalWrite(LED_RED_PIN, HIGH);
        break;
      case 'o':
        digitalWrite(LED_RED_PIN, LOW);
        break;
      case 'a':
        digitalWrite(LED_YELLOW_PIN, HIGH);
        break;
      case 'u':
        digitalWrite(LED_YELLOW_PIN, LOW);
        break;
      case 'd':
        digitalWrite(LED_GREEN_PIN, HIGH);
        break;
      case 'i':
        digitalWrite(LED_GREEN_PIN, LOW);
        break;    
    }
  }
}
