int LED_RED_PIN = 13;
int LED_GREEN_PIN = 12;
void setup()
{
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_RED_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_RED_PIN, LOW);
  delay(1000);
  digitalWrite(LED_GREEN_PIN, LOW);
  delay(1000);
}