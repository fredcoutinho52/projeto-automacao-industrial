const int pinoSensorAgua = A0;
const int pinoBombaAgua = 12;

void setup() {
  pinMode(pinoSensorAgua, INPUT);
  pinMode(pinoBombaAgua, OUTPUT);
}

void loop() {
  // VERIFICA O NÍVEL DE ÁGUA
  if(analogRead(pinoSensorAgua) > 690) {
    digitalWrite(pinoBombaAgua, HIGH);
  } else {
    digitalWrite(pinoBombaAgua, LOW);
  }
}
