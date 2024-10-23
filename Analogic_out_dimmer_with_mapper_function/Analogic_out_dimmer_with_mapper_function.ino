int ledPin = 5;
int potPin = A2;
int value;
int mapped;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  value = analogRead(potPin);
  Serial.println(value);
  mapped = map(value, 0, 1023, 0, 255);
  analogWrite(ledPin, mapped);
}
