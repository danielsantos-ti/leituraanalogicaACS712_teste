#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int pinoAnalogico = A0;

// Variável armazena valor lido
int armazenaValorAnalogicoLino = 0;

void setup() {

  Serial.begin(9600);
  
}

void loop() {
  
  armazenaValorAnalogicoLino = analogRead(pinoAnalogico);

  pinMode(pinoAnalogico, INPUT);
  Serial.println(armazenaValorAnalogicoLino);
  delay(1000);

}