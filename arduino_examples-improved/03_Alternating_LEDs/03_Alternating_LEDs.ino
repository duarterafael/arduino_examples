/*
 * 03 - Alternating LEDs
 * ---------------------
 * Dois LEDs piscam ALTERNADAMENTE: quando um acende, o outro apaga.
 *
 * Hardware: Arduino UNO + 2 LEDs + 2 resistores de 220 ohms
 * Pinagem:  LED vermelho no pino 13, LED verde no pino 12
 *
 * Conceitos: lógica complementar entre saídas digitais
 *
 * NOTA DIDÁTICA:
 *   No repositório original, este arquivo era idêntico ao "Synchronized_LEDs".
 *   A correção abaixo implementa o comportamento alternado de fato.
 */

const byte LED_RED_PIN = 13;
const byte LED_GREEN_PIN = 12;
const unsigned long INTERVAL_MS = 1000;

void setup() {
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);
}

void loop() {
  // Vermelho LIGADO, Verde DESLIGADO
  digitalWrite(LED_RED_PIN, HIGH);
  digitalWrite(LED_GREEN_PIN, LOW);
  delay(INTERVAL_MS);

  // Vermelho DESLIGADO, Verde LIGADO
  digitalWrite(LED_RED_PIN, LOW);
  digitalWrite(LED_GREEN_PIN, HIGH);
  delay(INTERVAL_MS);
}
