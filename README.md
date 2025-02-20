# LeituraAnalógicaACS712_teste

## Descrição
Este projeto tem como objetivo testar a leitura de corrente utilizando o sensor **ACS712** com um **Arduino UNO**. O sensor ACS712 mede a corrente elétrica de forma indireta, utilizando o efeito Hall, e fornece uma saída analógica proporcional à corrente detectada.

## Objetivo
- Realizar a leitura da corrente elétrica com o **sensor ACS712 (5A)**.
- Converter a saída analógica do sensor para um valor de corrente em **amperes (mA)**.
- Exibir os valores no **Monitor Serial** do Arduino.

## Materiais Necessários
- **Arduino Uno (ou compatível)**
- **Sensor ACS712 (5A)**
- **Relé 10A**
- **Carga elétrica - LED** 
- **Fonte de alimentação adequada para a carga 24V**
- **Jumpers para conexão macho-macho, macho-femea**
- **Protoboard**

## Funcionamento
1. O sensor **ACS712** é conectado ao relé em série ligado ao sensor ACS712 para medir a corrente que passa pelo circuito.
2. A saída do sensor é lida pelo **pino analógico do Arduino**.
3. O valor lido é convertido para corrente elétrica utilizando a calibração do sensor.
4. O resultado é exibido no **Monitor Serial** do Arduino.

## Exemplo de Código
```cpp
const int pinoACS = A0; // Pino analógico onde o ACS712 está conectado
float corrente;

void setup() {
    Serial.begin(9600);
}

void loop() {
    int valorLido = analogRead(pinoACS);
    Serial.print("Valor lido: ");
    Serial.println(valorLido);
    delay(1000);
}
