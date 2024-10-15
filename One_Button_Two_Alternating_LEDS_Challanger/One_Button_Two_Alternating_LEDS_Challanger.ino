const int LED_PIN_RED = 10;
const int LED_PIN_GREEN = 11;
const int BTN_PIN = 7;
bool state;

void setup() {
  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
}

void loop() {
  state = digitalRead(BTN_PIN);
 
  if(state == HIGH) {
    digitalWrite(LED_PIN_RED, HIGH);
    digitalWrite(LED_PIN_GREEN, LOW);
  } else {
    digitalWrite(LED_PIN_RED, LOW);
    digitalWrite(LED_PIN_GREEN, HIGH);
  }
}
