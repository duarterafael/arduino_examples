/*
 * 06 - One Button, Two Alternating LEDs (Challenge)
 * -------------------------------------------------
 * - Botão pressionado  -> LED vermelho aceso, verde apagado
 * - Botão solto        -> LED verde aceso, vermelho apagado
 *
 * Hardware: Arduino UNO + 2 LEDs (cada um com resistor 220 ohms) + 1 push-button
 * Pinagem:  LED vermelho no pino 10
 *           LED verde no pino 11
 *           Botão no pino 7 (um terminal no pino 7, outro no GND)
 *
 * Conceitos: leitura de entrada digital, controle condicional de duas saídas
 */

const byte LED_PIN_RED = 10;
const byte LED_PIN_GREEN = 11;
const byte BTN_PIN = 7;

void setup() {
  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);   // pull-up interno: dispensa resistor externo
}

void loop() {
  // Com INPUT_PULLUP: pressionado = LOW, solto = HIGH
  bool pressed = (digitalRead(BTN_PIN) == LOW);

  if (pressed) {
    digitalWrite(LED_PIN_RED, HIGH);
    digitalWrite(LED_PIN_GREEN, LOW);
  } else {
    digitalWrite(LED_PIN_RED, LOW);
    digitalWrite(LED_PIN_GREEN, HIGH);
  }
}
