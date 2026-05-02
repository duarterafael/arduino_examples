/*
 * 01 - Blink LED
 * --------------
 * Faz um LED piscar a cada 1 segundo.
 *
 * Hardware: Arduino UNO + 1 LED + 1 resistor de 220 ohms
 * Pinagem:  LED no pino digital 13 (LED interno da placa também acompanha)
 *
 * Conceitos: pinMode, digitalWrite, delay
 */

const byte LED_PIN = 13;
const unsigned long INTERVAL_MS = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // acende o LED
  delay(INTERVAL_MS);
  digitalWrite(LED_PIN, LOW);    // apaga o LED
  delay(INTERVAL_MS);
}
