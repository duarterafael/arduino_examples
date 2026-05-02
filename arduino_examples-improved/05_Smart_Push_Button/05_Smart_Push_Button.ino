/*
 * 05 - Smart Push Button
 * ----------------------
 * LED acende ENQUANTO o botão estiver pressionado.
 *
 * Hardware: Arduino UNO + 1 LED (com resistor 220 ohms) + 1 push-button
 * Pinagem:  LED no pino 10
 *           Botão no pino 7 (um terminal no pino 7, outro no GND)
 *
 * Conceitos: pinMode com INPUT_PULLUP, digitalRead, lógica invertida
 *
 * NOTA: usamos INPUT_PULLUP, que ativa o resistor de pull-up interno do
 * Arduino (~20-50 kohms). Isso DISPENSA o resistor externo no botão e
 * INVERTE a lógica: o botão lê HIGH quando solto e LOW quando pressionado.
 */

const byte LED_PIN = 10;
const byte BTN_PIN = 7;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  // Botão pressionado -> leitura LOW (por causa do pull-up interno)
  bool pressed = (digitalRead(BTN_PIN) == LOW);

  digitalWrite(LED_PIN, pressed ? HIGH : LOW);
}
