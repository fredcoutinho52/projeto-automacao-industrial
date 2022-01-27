const int pinoSensor = A0;
const int pinoLED = 12;

void setup() {
  pinMode(pinoSensor, INPUT);
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  if(analogRead(pinoSensor) > 690) {
    digitalWrite(pinoLED, HIGH);
  } else {
    digitalWrite(pinoLED, LOW);
  }
}
