// Chama biblioteca Arduino.h
#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int sensorACS = A0;

// Variável armazena valor lido
int armazenaValorAnalogico = 0;

// Função que imprime o valor lido pelo sensor de corrente

/*
void imprimeValorAnalogico(){

  // imprime o valor lido pelo sensor de corrente
  Serial.println(armazenaValorAnalogicoLino);
  // Intervalo de 1 segundo
  delay(1000);

}
*/


// Função de configuração
void setup() {

  // Inicializa a comunicação serial com baud rate de 9600
  Serial.begin(9600);
  
}


// Função de execução
void loop() {
  
  // Lê o valor do sensor de corrente
  armazenaValorAnalogico = analogRead(sensorACS);

  // Configura o pino do sensor de corrente como entrada
  pinMode(sensorACS, INPUT);
  
  // Lê o valor do sensor de corrente
  armazenaValorAnalogico = analogRead(pinoAnalogico);

  float corrente = (armazenaValorAnalogico - 512) / 66.0;

  Serial.print("Corrente: ");
  Serial.print(corrente);
  Serial.println(" Ampere: ");
  delay(1000);
  
  // Chama a função que imprime o valor lido pelo sensor de corrente
  // imprimeValorAnalogico();


}