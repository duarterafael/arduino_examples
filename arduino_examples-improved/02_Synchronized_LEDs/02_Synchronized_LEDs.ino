/*
 * 02 - Synchronized LEDs
 * ----------------------
 * Dois LEDs piscam JUNTOS (ligam e desligam ao mesmo tempo).
 *
 * Hardware: Arduino UNO + 2 LEDs + 2 resistores de 220 ohms
 * Pinagem:  LED vermelho no pino 13, LED verde no pino 12
 *
 * Conceitos: controle de múltiplas saídas digitais simultâneas
 */

const byte LED_RED_PIN = 13;
const byte LED_GREEN_PIN = 12;
const unsigned long INTERVAL_MS = 1000;

void setup() {
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
}

void loop() {
  // Ambos LIGADOS
  digitalWrite(LED_RED_PIN, HIGH);
  digitalWrite(LED_GREEN_PIN, HIGH);
  delay(INTERVAL_MS);

  // Ambos DESLIGADOS
  digitalWrite(LED_RED_PIN, LOW);
  digitalWrite(LED_GREEN_PIN, LOW);
  delay(INTERVAL_MS);
}
