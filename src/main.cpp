// Chama biblioteca Arduino.h
#include <Arduino.h>

// Pino de entrada do sensor de corrente ACS712 de 30A
int sensorACS = A0;

// Pino de saída do relé
int pinoRele = 7;

// Limites de corrente para ligar e desligar o relé
float limiteLigado = 550.0;
float limiteDesligado = 450.0;

bool estadoDoRele = false;

// Função para ler o sensor de corrente
int lerSensor(){
  return analogRead(sensorACS);
}


void processaCorrente(int valor){

  // Converte o valor analógico em corrente mA
  float corrente = (valor - 512) * 1000 / 180.0;

  // Verfica se a corrente é maior que o limite
  if(!estadoDoRele && corrente > limiteLigado){

    estadoDoRele = true;
    digitalWrite(pinoRele, HIGH);
    Serial.println("Relé ligado");

  }else{

    estadoDoRele = false;
    digitalWrite(pinoRele, LOW);
    Serial.println("Relé desligado");

  }

  // Imprime o valor da corrente
  Serial.print("Corrente: ");
  Serial.print(corrente);
  Serial.println(" mA.");

}


// Função de configuração
void setup() {

  // Inicializa o monitor serial
  Serial.begin(9600);

  // Configura o pino do relé como saída
  pinMode(pinoRele, OUTPUT);

  // inIcializa o relé dessligado
  digitalWrite(pinoRele, LOW);
  
}

// Função de execução
void loop() {
  
  int valorLido = lerSensor();

  processaCorrente(valorLido);

  delay(1000);
}