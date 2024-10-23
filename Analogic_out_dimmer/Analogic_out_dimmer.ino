int ledPin = 5;
int potPin = A2;
int value;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  value = analogRead(potPin);
  Serial.println(value);
  Serial.println(value/4);

  analogWrite(ledPin, value/4);
}
