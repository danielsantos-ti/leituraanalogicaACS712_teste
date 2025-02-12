// Chama biblioteca Arduino.h
#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int sensorACS = A0;

// Variável armazena valor lido
int armazenaValorAnalogico = 0;

// Função de configuração
void setup() {

  // Configura o pino do sensor de corrente como entrada
  pinMode(sensorACS, INPUT);

  // Inicializa a comunicação serial com baud rate de 9600
  Serial.begin(9600);
  
}


// Função de execução
void loop() {
  
  // Lê o valor do sensor de corrente
  armazenaValorAnalogico = analogRead(sensorACS);

  // Calcula a corrente em Ampere
  float corrente = (armazenaValorAnalogico - 512) / 66.0;

  // Imprime o valor da corrente no monitor serial
  Serial.print("Corrente: ");
  Serial.print(corrente);
  Serial.println(" Ampere: ");
  delay(1000);

}