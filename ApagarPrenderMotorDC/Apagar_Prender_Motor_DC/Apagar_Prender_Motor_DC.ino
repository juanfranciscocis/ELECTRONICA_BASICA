 
#define MOTOR 3
#define POT A0
 
int valorPotenciometro= 0;
 
int pmw;
 
void setup() {
  pinMode(MOTOR, OUTPUT);   
  digitalWrite( MOTOR, LOW );
}
 
void loop() {

  valorPotenciometro = analogRead(POT);
 
  pmw = map(valorPotenciometro, 0, 1023, 0, 255);
 
  analogWrite( MOTOR, pmw );
 
  delay(30);
}