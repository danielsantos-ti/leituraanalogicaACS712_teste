// Chama biblioteca Arduino.h
#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int sensorACS = A0;

// Função para ler o sensor de corrente
int lerSensor(){
  return analogRead(sensorACS);
}


// Função para imprimir o valor do sensor de corrente
void imprimeValorAnalogico(int valor){

  // Lê o valor do sensor de corrente
  float corrente = (valor - 512) / 66.0;

  // Imprime o valor do sensor de corrente
  Serial.print("Corrente: ");
  Serial.print(corrente);
  Serial.println(" Ampere ");

}


// Função de configuração
void setup() {

  // Inicializa o monitor serial
  Serial.begin(9600);
  
}

// Função de execução
void loop() {
  
  int valorLido = lerSensor();

  imprimeValorAnalogico(valorLido);

  delay(1000);
}