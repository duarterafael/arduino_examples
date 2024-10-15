const int LED_PIN = 10;
const int BTN_PIN = 7;
bool state;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
}

void loop() {
  state = digitalRead(BTN_PIN);
 
  if(state == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
