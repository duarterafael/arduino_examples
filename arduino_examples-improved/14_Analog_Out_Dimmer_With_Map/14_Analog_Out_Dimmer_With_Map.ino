/*
 * 14 - Analog Out Dimmer com map()
 * --------------------------------
 * Mesma ideia do exemplo 13, mas usa a função map() para converter a leitura
 * do potenciômetro (0..1023) para a faixa do PWM (0..255).
 *
 * Vantagem: map() torna explícita a faixa de origem e destino, e facilita
 * adaptar o código para outras faixas (ex.: 100..900 -> 50..200).
 *
 * Hardware: Arduino UNO + potenciômetro 10 kohms + 1 LED + resistor 220 ohms
 * Pinagem:  Pot em A2, LED no pino 5 (PWM)
 *
 * Conceitos: função map(), abstração de conversão de escalas
 */

const byte LED_PIN = 5;
const byte POT_PIN = A2;
const long BAUD_RATE = 9600;

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int value = analogRead(POT_PIN);                  // 0..1023
  int mapped = map(value, 0, 1023, 0, 255);         // 0..255

  Serial.print("ADC=");
  Serial.print(value);
  Serial.print("  PWM=");
  Serial.println(mapped);

  analogWrite(LED_PIN, mapped);
  delay(50);
}
