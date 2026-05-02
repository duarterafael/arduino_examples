/*
 * 11 - Potentiometer
 * ------------------
 * Lê o valor de um potenciômetro e imprime na serial (0 a 1023).
 *
 * Hardware: Arduino UNO + potenciômetro 10 kohms
 * Pinagem:  Terminais externos do pot em 5V e GND, pino central em A2
 *
 * Conceitos: analogRead, ADC de 10 bits (0..1023), entrada analógica
 */

const byte POT_PIN = A2;
const long BAUD_RATE = 9600;
const unsigned long INTERVAL_MS = 1000;

void setup() {
  Serial.begin(BAUD_RATE);
  // Pinos analógicos não precisam de pinMode para leitura.
}

void loop() {
  int value = analogRead(POT_PIN);
  Serial.println(value);
  delay(INTERVAL_MS);
}
