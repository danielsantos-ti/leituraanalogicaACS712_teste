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

void setup() {

  Serial.begin(9600);
  
}

void loop() {
  
  armazenaValorAnalogicoLino = analogRead(pinoAnalogico);

  pinMode(pinoAnalogico, INPUT);

  imprimeValorAnalogico();
  

}