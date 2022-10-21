
int contador = 0;

int analogInPin = A0;
int valorMapeado = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {


  valorMapeado = map(analogRead(analogInPin), 0, 1023, 0, 255);
  contador+=1;

  Serial.print(contador);
  Serial.print("\t");
  Serial.print(analogRead(analogInPin));
  Serial.print("\t");
  Serial.println(valorMapeado);

  delay(1);
}
