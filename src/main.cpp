// Chama biblioteca Arduino.h
#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int pinoAnalogico = A0;

// Variável armazena valor lido
int armazenaValorAnalogicoLino = 0;


// Função que imprime o valor lido do sensor de corrente
void imprimeValorAnalogico(){

  Serial.println(armazenaValorAnalogicoLino);
  delay(500);

}


// Função que imprime o valor lido pelo sensor de corrente
void imprimeValorAnalogico(){

  // imprime o valor lido pelo sensor de corrente
  Serial.println(armazenaValorAnalogicoLino);
  // Intervalo de 1 segundo
  delay(1000);

}

// Função de configuração
void setup() {

  // Inicializa a comunicação serial com baud rate de 9600
  Serial.begin(9600);
  
}


// Função de execução
void loop() {
  
  // Lê o valor do sensor de corrente
  armazenaValorAnalogicoLino = analogRead(pinoAnalogico);

  // Configura o pino do sensor de corrente como entrada
  pinMode(pinoAnalogico, INPUT);
  Serial.println(armazenaValorAnalogicoLino);
  delay(1000);

}