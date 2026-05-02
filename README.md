# Arduino Examples

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Platform: Arduino UNO](https://img.shields.io/badge/Platform-Arduino%20UNO-00979D.svg)](https://www.arduino.cc/)
[![IDE](https://img.shields.io/badge/IDE-Arduino%20IDE%202.x-teal.svg)](https://www.arduino.cc/en/software)

Coletânea de exemplos didáticos apresentados em sala de aula, cobrindo desde o tradicional *Blink* até comunicação serial e leitura de sensores analógicos. Cada exemplo inclui código comentado, link para simulação no Tinkercad e, quando disponível, vídeo demonstrativo.

Os sketches estão em [`arduino_examples-improved/`](./arduino_examples-improved/).

## Sumário

- [Pré-requisitos](#pré-requisitos)
- [Como usar](#como-usar)
- [Saídas Digitais](#saídas-digitais)
  - [01. Blink LED](#01-blink-led)
  - [02. LEDs Síncronos](#02-leds-síncronos)
  - [03. LEDs Alternados](#03-leds-alternados)
  - [04. LEDs Ritmados](#04-leds-ritmados)
- [Entradas Digitais (Botões)](#entradas-digitais-botões)
  - [05. Botão controlando LED](#05-botão-controlando-led)
  - [06. Desafio: botão com dois LEDs alternados](#06-desafio-botão-com-dois-leds-alternados)
- [Comunicação Serial](#comunicação-serial)
  - [07. Exibindo o valor de uma variável](#07-exibindo-o-valor-de-uma-variável)
  - [08. Exibindo o estado do botão](#08-exibindo-o-estado-do-botão)
  - [09. Acendendo LED via Serial](#09-acendendo-led-via-serial)
  - [10. Desafio: Semáforo via Serial](#10-desafio-semáforo-via-serial)
- [Entradas Analógicas](#entradas-analógicas)
  - [11. Leitura de potenciômetro](#11-leitura-de-potenciômetro)
  - [12. Desafio: Estação meteorológica com semáforo](#12-desafio-estação-meteorológica-com-semáforo)
- [Saídas Analógicas (PWM)](#saídas-analógicas-pwm)
  - [13. Dimmer simples](#13-dimmer-simples)
  - [14. Dimmer com `map()`](#14-dimmer-com-map)
- [Licença](#licença)

---

## Pré-requisitos

- **Hardware:** Arduino UNO (ou compatível), cabo USB tipo B, protoboard, jumpers, LEDs, resistores 220 Ω, push buttons, potenciômetro 10 kΩ. Alguns exemplos usam DHT11 e LDR.
- **Software:** [Arduino IDE 2.x](https://www.arduino.cc/en/software).
- **Bibliotecas externas** (instalar via *Library Manager*):
  - `DHT sensor library` (Adafruit) — usado no exemplo 12.

## Como usar

1. Clone o repositório:
   ```bash
   git clone https://github.com/duarterafael/arduino_examples.git
   ```
2. Abra a pasta do exemplo desejado no Arduino IDE (cada `.ino` está em `arduino_examples-improved/<pasta>/` — exigência do IDE).
3. Selecione `Tools > Board > Arduino UNO` e a porta correta em `Tools > Port`.
4. Monte o circuito conforme indicado no início de cada `.ino` ou no link do simulador.
5. Clique em **Upload** (Ctrl + U).

---

## Saídas Digitais

### 01. Blink LED

Faz um LED piscar a cada 1 segundo. É o "Hello World" do Arduino.

- **Aula relacionada:** *Aula 10 – Introdução ao Arduino* / *Aula 11 – Saídas Digitais*
- **Conceitos:** `pinMode`, `digitalWrite`, `delay`
- **Código:** [`arduino_examples-improved/01_Blink_Led/01_Blink_Led.ino`](./arduino_examples-improved/01_Blink_Led/01_Blink_Led.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/ktN0x3f2SJb-blink-led)
- **Vídeo:** [![Blink LED](https://img.youtube.com/vi/2RZ8XGStIvs/0.jpg)](https://www.youtube.com/watch?v=2RZ8XGStIvs)

### 02. LEDs Síncronos

Dois LEDs piscam **juntos** (ligam e desligam ao mesmo tempo).

- **Conceitos:** controle de múltiplas saídas digitais simultâneas
- **Código:** [`arduino_examples-improved/02_Synchronized_LEDs/02_Synchronized_LEDs.ino`](./arduino_examples-improved/02_Synchronized_LEDs/02_Synchronized_LEDs.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/0Idigwy2os1-led-sincronos)

### 03. LEDs Alternados

Dois LEDs piscam de forma **alternada** (quando um acende, o outro apaga).

- **Conceitos:** lógica complementar entre saídas digitais
- **Código:** [`arduino_examples-improved/03_Alternating_LEDs/03_Alternating_LEDs.ino`](./arduino_examples-improved/03_Alternating_LEDs/03_Alternating_LEDs.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/f5pSL4FmAWL-leds-alternados)

### 04. LEDs Ritmados

Sequência rítmica de quatro estados: `LED1 on → LED2 on → LED1 off → LED2 off`.

- **Código:** [`arduino_examples-improved/04_Rhythmic_LEDs/04_Rhythmic_LEDs.ino`](./arduino_examples-improved/04_Rhythmic_LEDs/04_Rhythmic_LEDs.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/dA42dmlr51q-leds-ritmadas)

> 📺 **Demonstração dos exemplos 02–04 (LED Challenge):** [![LED Challenge](https://img.youtube.com/vi/QCW97ERtWqE/0.jpg)](https://www.youtube.com/watch?v=QCW97ERtWqE)

---

## Entradas Digitais (Botões)

### 05. Botão controlando LED

LED acende enquanto o botão estiver pressionado.

- **Aula relacionada:** *Aula 12 – Entradas Digitais e Variáveis*
- **Conceitos:** `pinMode(..., INPUT_PULLUP)`, `digitalRead`, fluxo `if/else`
- **Código:** [`arduino_examples-improved/05_Smart_Push_Button/05_Smart_Push_Button.ino`](./arduino_examples-improved/05_Smart_Push_Button/05_Smart_Push_Button.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/8ZIVBXm9NUW-botao-simples)
- **Vídeo:** [![Smart Push Button](https://img.youtube.com/vi/DMLqTHtcvq8/0.jpg)](https://www.youtube.com/watch?v=DMLqTHtcvq8)

### 06. Desafio: botão com dois LEDs alternados

Botão pressionado acende um LED; botão solto acende o outro.

- **Código:** [`arduino_examples-improved/06_One_Button_Two_Alternating_LEDs_Challenge/06_One_Button_Two_Alternating_LEDs_Challenge.ino`](./arduino_examples-improved/06_One_Button_Two_Alternating_LEDs_Challenge/06_One_Button_Two_Alternating_LEDs_Challenge.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/94CSyRGDmyl-desafio-botao-com-dois-leds)
- **Vídeo:** [![Desafio Botão](https://img.youtube.com/vi/0Q5KDLIOVGg/0.jpg)](https://www.youtube.com/watch?v=0Q5KDLIOVGg)

---

## Comunicação Serial

### 07. Exibindo o valor de uma variável

Imprime no Serial Monitor o valor de uma variável a cada segundo.

- **Conceitos:** `Serial.begin`, `Serial.print`, `Serial.println`
- **Código:** [`arduino_examples-improved/07_Show_Variable_Through_Serial/07_Show_Variable_Through_Serial.ino`](./arduino_examples-improved/07_Show_Variable_Through_Serial/07_Show_Variable_Through_Serial.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/5rwW7FfrhYk-exibindo-o-valor-de-uma-variavel-pela-serial)

### 08. Exibindo o estado do botão

Combina LED + botão + serial: imprime "pressionado/solto" **apenas na transição** (sem inundar a serial).

- **Código:** [`arduino_examples-improved/08_Show_Button_State_In_Serial/08_Show_Button_State_In_Serial.ino`](./arduino_examples-improved/08_Show_Button_State_In_Serial/08_Show_Button_State_In_Serial.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/agAcwTyRb4G-desafio-botao-com-dois-leds-com-serial)
- **Vídeo:** [![Estado do Botão](https://img.youtube.com/vi/zLVnZbGI-m0/0.jpg)](https://www.youtube.com/watch?v=zLVnZbGI-m0)

### 09. Acendendo LED via Serial

Lê comandos do Serial Monitor (`l` liga, `d` desliga) e controla um LED.

- **Conceitos:** `Serial.available`, `Serial.read`
- **Código:** [`arduino_examples-improved/09_Serial_Input_Led/09_Serial_Input_Led.ino`](./arduino_examples-improved/09_Serial_Input_Led/09_Serial_Input_Led.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/2VdzJEdY7IJ-leitura-de-dados-seriais)

### 10. Desafio: Semáforo via Serial

Controla três LEDs (vermelho, amarelo, verde) por comandos da serial.

- **Código:** [`arduino_examples-improved/10_Challenge_Serial_Traffic_Light/10_Challenge_Serial_Traffic_Light.ino`](./arduino_examples-improved/10_Challenge_Serial_Traffic_Light/10_Challenge_Serial_Traffic_Light.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/atsWRupcOJI-desafio-semaforo-serial)

---

## Entradas Analógicas

### 11. Leitura de potenciômetro

Lê um potenciômetro e imprime o valor (0–1023) na serial.

- **Conceitos:** `analogRead`, conversão A/D de 10 bits
- **Código:** [`arduino_examples-improved/11_Potentiometer/11_Potentiometer.ino`](./arduino_examples-improved/11_Potentiometer/11_Potentiometer.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/4cCe5GLhZro-dados-potenciometro)

### 12. Desafio: Estação meteorológica com semáforo

Lê temperatura e umidade de um DHT11 sob comando serial e controla três LEDs como sinalizador. *(Requer biblioteca `DHT sensor library` da Adafruit.)*

- **Código:** [`arduino_examples-improved/12_Challenge_LDR_Traffic_Light/12_Challenge_LDR_Traffic_Light.ino`](./arduino_examples-improved/12_Challenge_LDR_Traffic_Light/12_Challenge_LDR_Traffic_Light.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/4REiulvRIdV-desafio-poste-ldr)

---

## Saídas Analógicas (PWM)

### 13. Dimmer simples

Controla o brilho de um LED com um potenciômetro usando divisão por 4 (forma "ingênua" de mapear 0–1023 para 0–255).

- **Conceitos:** `analogWrite` (PWM), por que dividir por 4 funciona mas não é o ideal
- **Código:** [`arduino_examples-improved/13_Analog_Out_Dimmer/13_Analog_Out_Dimmer.ino`](./arduino_examples-improved/13_Analog_Out_Dimmer/13_Analog_Out_Dimmer.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/5iCP23oJetC-dimmer)

### 14. Dimmer com `map()`

Mesma ideia do anterior, mas usando `map()` — abordagem idiomática e mais flexível.

- **Conceitos:** função `map()`, generalização de escalas
- **Código:** [`arduino_examples-improved/14_Analog_Out_Dimmer_With_Map/14_Analog_Out_Dimmer_With_Map.ino`](./arduino_examples-improved/14_Analog_Out_Dimmer_With_Map/14_Analog_Out_Dimmer_With_Map.ino)
- **Simulador:** [Tinkercad](https://www.tinkercad.com/things/d8dovlpfGX2-dimmer-com-a-funcao-mapper)

---

## Contribuindo

Sugestões, correções e novos exemplos são bem-vindos! Abra uma *issue* ou *pull request*.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
