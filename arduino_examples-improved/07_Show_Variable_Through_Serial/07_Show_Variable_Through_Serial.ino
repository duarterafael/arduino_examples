/*
 * 07 - Show Variable Through Serial
 * ---------------------------------
 * Imprime no Serial Monitor o valor de uma variável a cada 1 segundo.
 * Para ver a saída: Tools > Serial Monitor (Ctrl+Shift+M), 9600 baud.
 *
 * Hardware: apenas Arduino UNO + cabo USB
 *
 * Conceitos: Serial.begin, Serial.print, Serial.println
 */

const long BAUD_RATE = 9600;
const unsigned long INTERVAL_MS = 1000;

int valorExemplo = 15;

void setup() {
  Serial.begin(BAUD_RATE);
  Serial.println("O Arduino foi iniciado!");
}

void loop() {
  Serial.print("O valor armazenado na variavel e: ");
  Serial.println(valorExemplo);

  delay(INTERVAL_MS);
}
