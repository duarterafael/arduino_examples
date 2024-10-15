int valorExemplo = 15;

void setup() {
  Serial.begin(9600); // inicializa a comunicação serial com 9600 bits por segundo
  Serial.println("O Arduino foi iniciado!"); // exibe o texto e quebra a linha
}

void loop() {
  Serial.print("O valor armazenado na variavel eh: "); // exibe o texto
  Serial.println(valorExemplo); // exibe o valor da variável e quebra a linha

  delay(1000);
}

