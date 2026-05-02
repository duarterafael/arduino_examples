/*
 * 12 - Challenge: DHT11 + Semáforo (originalmente "LDR Traffic Light")
 * --------------------------------------------------------------------
 * Estação meteorológica simples controlada via serial:
 *   - Comando "leitura_tempUmid" -> imprime temperatura e umidade
 *   - Comandos "led_<cor>_ligando" / "led_<cor>_desligando" controlam LEDs
 *
 * Cores aceitas: verde, vermelho, amarelo
 *   ex.: "led_verde_ligando", "led_vermelho_desligando"
 *
 * IMPORTANTE: apesar do nome do arquivo mencionar "LDR", o código real
 * usa um sensor DHT11 (temperatura e umidade). Mantemos o nome por
 * compatibilidade com o repositório original.
 *
 * Hardware:
 *   - Arduino UNO
 *   - Sensor DHT11 (data no pino 9, com resistor pull-up de 10k entre data e VCC)
 *   - 3 LEDs com resistores 220 ohms:
 *       verde no pino 7, vermelho no pino 6, amarelo no pino 5
 *
 * Biblioteca necessária: "DHT sensor library" (Adafruit) - instalar pelo
 * Library Manager do Arduino IDE.
 *
 * Conceitos: bibliotecas externas, leitura de sensor, parsing serial por linha
 */

#include "DHT.h"

const byte DHT_PIN = 9;
const byte LED_GREEN_PIN = 7;
const byte LED_RED_PIN = 6;
const byte LED_YELLOW_PIN = 5;
const long BAUD_RATE = 9600;

DHT dht(DHT_PIN, DHT11);

void setup() {
  Serial.begin(BAUD_RATE);
  pinMode(LED_GREEN_PIN, OUTPUT);
  pinMode(LED_RED_PIN, OUTPUT);
  pinMode(LED_YELLOW_PIN, OUTPUT);
  dht.begin();
}

void loop() {
  if (!Serial.available()) return;

  String comando = Serial.readStringUntil('\n');
  comando.trim();   // remove \r e espaços

  if (comando == "leitura_tempUmid") {
    float temperatura = dht.readTemperature();
    float umidade = dht.readHumidity();

    if (isnan(temperatura) || isnan(umidade)) {
      Serial.println("Erro ao ler o sensor");
    } else {
      Serial.println(temperatura, 2);
      Serial.println(umidade, 2);
    }
  }
  else if (comando == "led_verde_ligando")        digitalWrite(LED_GREEN_PIN, HIGH);
  else if (comando == "led_verde_desligando")     digitalWrite(LED_GREEN_PIN, LOW);
  else if (comando == "led_vermelho_ligando")     digitalWrite(LED_RED_PIN, HIGH);
  else if (comando == "led_vermelho_desligando")  digitalWrite(LED_RED_PIN, LOW);
  else if (comando == "led_amarelo_ligando")      digitalWrite(LED_YELLOW_PIN, HIGH);
  else if (comando == "led_amarelo_desligando")   digitalWrite(LED_YELLOW_PIN, LOW);
}
