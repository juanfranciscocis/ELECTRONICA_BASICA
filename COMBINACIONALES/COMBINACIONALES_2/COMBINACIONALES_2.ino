
const int Y = 4;


const int A = 6;
const int B = 7;
const int C = 8;
const int D = 9;


void setup() {
  // put your setup code here, to run once:

  pinMode(Y, OUTPUT);


  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(D) == HIGH || (digitalRead(A) == HIGH && digitalRead(B) == HIGH && digitalRead(C)!=HIGH)){
    digitalWrite(Y,HIGH);
  }else{
    digitalWrite(Y,LOW);
  }



}
