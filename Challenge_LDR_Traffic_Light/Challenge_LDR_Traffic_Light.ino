const int LDR_PIN = A0;
const int LED_PIN = 13;
int LDRValue ;
void setup() {
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT); 
}

void loop() {
  LDRValue = analogRead(LDR_PIN);
  Serial.print("LDR : " );
  Serial.println(LDRValue);

  if (LDRValue > 700) {  
    digitalWrite(LED_PIN, HIGH);
  } else {                   
    digitalWrite(LED_PIN, LOW);  
  }
  delay(100);            
}