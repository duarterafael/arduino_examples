/*
 * 04 - Rhythmic LEDs
 * ------------------
 * Sequência ritmada de quatro estados:
 *   1) liga vermelho
 *   2) liga verde (vermelho continua aceso)
 *   3) desliga vermelho (verde continua aceso)
 *   4) desliga verde
 * Resultado: padrão "cascata" entre os dois LEDs.
 *
 * Hardware: Arduino UNO + 2 LEDs + 2 resistores de 220 ohms
 * Pinagem:  LED vermelho no pino 13, LED verde no pino 12
 *
 * Conceitos: sequenciamento temporal, pinMode, digitalWrite, delay
 */

const byte LED_RED_PIN = 13;
const byte LED_GREEN_PIN = 12;
const unsigned long STEP_MS = 1000;

void setup() {
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_RED_PIN, HIGH);
  delay(STEP_MS);

  digitalWrite(LED_GREEN_PIN, HIGH);
  delay(STEP_MS);

  digitalWrite(LED_RED_PIN, LOW);
  delay(STEP_MS);

  digitalWrite(LED_GREEN_PIN, LOW);
  delay(STEP_MS);
}
