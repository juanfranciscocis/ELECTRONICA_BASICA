const int buttonPin = 4;
const int ledPin =  8;   


int estadoBoton = 0;        

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {

  estadoBoton = digitalRead(buttonPin);


  if (estadoBoton == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
