int potPin = A2;
int value;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(potPin);
 
  Serial.println(value);
  delay(1000);
}
