#include "HX711.h"

#define DT A1
#define SCK A0

HX711 escala;

const int pinoSensorAgua = A0;
const int pinoBombaAgua = 12;
const int pinoRacao = 11;

void setup() {
  escala.begin (DT, SCK);
  escala.set_scale();
  escala.tare(20);
  
  pinMode(pinoSensorAgua, INPUT);
  pinMode(pinoBombaAgua, OUTPUT);
  pinMode(pinoRacao, OUTPUT);
}

void loop() {
  // VERIFICA O NÍVEL DE ÁGUA
  if(analogRead(pinoSensorAgua) > 690) {
    digitalWrite(pinoBombaAgua, HIGH);
  } else {
    digitalWrite(pinoBombaAgua, LOW);
  }

  // VERIFICA O PESO DA RAÇÃO
  if (escala.get_value(10) > 70000) {
    digitalWrite(pinoRacao, HIGH);
  } else {
    digitalWrite(pinoRacao, LOW);
  }
}
