/*
 * 13 - Analog Out Dimmer (versão simples)
 * ---------------------------------------
 * Controla o brilho de um LED com um potenciômetro.
 *
 * Como o ADC do Arduino UNO tem 10 bits (0..1023) e o PWM de analogWrite
 * tem 8 bits (0..255), dividimos por 4 (1024/256 = 4) para converter
 * a leitura.
 *
 * Hardware: Arduino UNO + potenciômetro 10 kohms + 1 LED + resistor 220 ohms
 * Pinagem:  Pot em A2 (terminais externos em 5V e GND, central em A2)
 *           LED no pino 5 (deve ser pino PWM: 3, 5, 6, 9, 10 ou 11)
 *
 * Conceitos: analogRead, analogWrite (PWM), conversão de escalas
 *
 * Veja também: 14_Analog_Out_Dimmer_With_Map (versão idiomática com map())
 */

const byte LED_PIN = 5;
const byte POT_PIN = A2;
const long BAUD_RATE = 9600;

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int value = analogRead(POT_PIN);   // 0..1023
  int pwm = value / 4;               // 0..255 (forma simples; veja exemplo 14)

  Serial.print("ADC=");
  Serial.print(value);
  Serial.print("  PWM=");
  Serial.println(pwm);

  analogWrite(LED_PIN, pwm);
  delay(50);                          // taxa de impressão razoável na serial
}
