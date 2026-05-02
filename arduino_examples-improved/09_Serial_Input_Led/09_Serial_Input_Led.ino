/*
 * 09 - Serial Input Led
 * ---------------------
 * Liga e desliga um LED conforme comandos enviados pela serial:
 *   'l' (ligar) -> acende o LED
 *   'd' (desligar) -> apaga o LED
 *
 * Hardware: Arduino UNO + 1 LED + 1 resistor de 220 ohms
 * Pinagem:  LED no pino 4
 *
 * Conceitos: Serial.available, Serial.read, leitura de caracteres
 *
 * Para testar: abra o Serial Monitor (9600 baud), digite 'l' ou 'd' e envie.
 */

const byte LED_PIN = 4;     // (typo "LED_PINT" do original foi corrigido)
const long BAUD_RATE = 9600;

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();

    if (input == 'l') {
      digitalWrite(LED_PIN, HIGH);
    } else if (input == 'd') {
      digitalWrite(LED_PIN, LOW);
    }
  }
}
