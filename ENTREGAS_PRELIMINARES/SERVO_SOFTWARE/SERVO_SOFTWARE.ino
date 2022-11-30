#include<Servo.h>
Servo Myservo;
int pos;
void setup()
{
Myservo.attach(3);
}

void loop()
{
  
  delay(1000);
  for(pos=18;pos<=110;pos++){
    Myservo.write(pos);
    delay(15);
  }
  
  

}