#include <Servo.h>

Servo servomotor;  
	
int potenciometroPin = A0;
int valorPotenciometro;    

void setup() {
  servomotor.attach(9);  
}
	
void loop() {
  valorPotenciometro = analogRead(potenciometroPin);            
  valorPotenciometro = map(valorPotenciometro, 0, 1023, 0, 180);     
	servomotor.write(valorPotenciometro);                  
  delay(8);
}
