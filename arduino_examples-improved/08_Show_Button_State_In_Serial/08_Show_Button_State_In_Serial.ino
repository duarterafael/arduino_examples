/*
 * 08 - Show Button State In Serial
 * --------------------------------
 * Combina LED + botão + serial:
 *   - botão pressionado -> LED vermelho liga, verde apaga, imprime "Botao pressionado!"
 *   - botão solto       -> LED verde liga, vermelho apaga, imprime "Botao solto!"
 *
 * Importante: a mensagem só é impressa NA TRANSIÇÃO de estado, não a cada
 * iteração do loop. Caso contrário, a serial recebe milhares de mensagens
 * por segundo (loop roda em microssegundos), o que polui o Serial Monitor
 * e dificulta a leitura.
 *
 * Hardware: Arduino UNO + 2 LEDs (com resistores 220 ohms) + 1 push-button
 * Pinagem:  LED vermelho no pino 10, LED verde no pino 11
 *           Botão no pino 7 (um terminal no pino 7, outro no GND)
 *
 * Conceitos: detecção de borda (edge detection), variáveis de estado
 */

const byte LED_PIN_RED = 10;
const byte LED_PIN_GREEN = 11;
const byte BTN_PIN = 7;
const long BAUD_RATE = 9600;

bool lastPressed = false;   // estado anterior, usado para detectar transições

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_PIN_RED, OUTPUT);
  pinMode(LED_PIN_GREEN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  bool pressed = (digitalRead(BTN_PIN) == LOW);   // INPUT_PULLUP -> lógica invertida

  if (pressed) {
    digitalWrite(LED_PIN_RED, HIGH);
    digitalWrite(LED_PIN_GREEN, LOW);
  } else {
    digitalWrite(LED_PIN_RED, LOW);
    digitalWrite(LED_PIN_GREEN, HIGH);
  }

  // Imprime só quando o estado mudou (borda)
  if (pressed != lastPressed) {
    Serial.println(pressed ? "Botao pressionado!" : "Botao solto!");
    lastPressed = pressed;
  }
}
