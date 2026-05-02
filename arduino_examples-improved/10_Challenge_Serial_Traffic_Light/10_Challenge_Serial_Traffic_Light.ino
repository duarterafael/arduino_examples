/*
 * 10 - Challenge: Serial Traffic Light
 * ------------------------------------
 * Controla três LEDs (vermelho, amarelo, verde) por comandos da serial.
 *   'v' liga vermelho      'o' desliga vermelho
 *   'a' liga amarelo       'u' desliga amarelo
 *   'd' liga verde         'i' desliga verde
 *
 * Hardware: Arduino UNO + 3 LEDs (cada um com resistor 220 ohms)
 * Pinagem:  Vermelho no pino 11, Amarelo no pino 10, Verde no pino 9
 *
 * Conceitos: switch/case, controle de múltiplas saídas via comando
 */

const byte LED_RED_PIN = 11;
const byte LED_YELLOW_PIN = 10;
const byte LED_GREEN_PIN = 9;
const long BAUD_RATE = 9600;

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  pinMode(LED_GREEN_PIN, OUTPUT);

  Serial.println("Comandos: v/o (vermelho on/off), a/u (amarelo on/off), d/i (verde on/off)");
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

    switch (input) {
      case 'v': digitalWrite(LED_RED_PIN, HIGH);    break;
      case 'o': digitalWrite(LED_RED_PIN, LOW);     break;
      case 'a': digitalWrite(LED_YELLOW_PIN, HIGH); break;
      case 'u': digitalWrite(LED_YELLOW_PIN, LOW);  break;
      case 'd': digitalWrite(LED_GREEN_PIN, HIGH);  break;
      case 'i': digitalWrite(LED_GREEN_PIN, LOW);   break;
      default: /* ignora outros caracteres (incl. \n, \r) */ break;
    }
  }
}
