const int ledPin = 4;

int estadoLed = LOW;

unsigned long milisegundosAntes = 0;        


long intervalo = 4000;           

void setup() {

  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long tiempoActual = millis();

  if (tiempoActual - milisegundosAntes >= intervalo) {
    milisegundosAntes = tiempoActual;

    if (estadoLed == LOW) {
      estadoLed = HIGH;
      intervalo = 4000;
    } else {
      estadoLed = LOW;
      intervalo = 1000;
    }
    
    digitalWrite(ledPin, estadoLed);
  }
}
