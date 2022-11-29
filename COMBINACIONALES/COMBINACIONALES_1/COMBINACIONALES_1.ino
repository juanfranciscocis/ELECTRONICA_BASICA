const int AOne = 4;
const int ATwo = 5;

const int SOne = 6;
const int STwo = 7;
const int SThree = 8;



void setup() {
  // put your setup code here, to run once:
  pinMode(AOne, OUTPUT);
  pinMode(ATwo, OUTPUT);

  pinMode(SOne, INPUT);
  pinMode(STwo, INPUT);
  pinMode(SThree, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(SThree) == HIGH ||(digitalRead(SOne) == HIGH && digitalRead(STwo) == HIGH) ){
    digitalWrite(AOne,HIGH);
  }else{
    digitalWrite(AOne,LOW);
  }



  if(digitalRead(SOne) == HIGH || (digitalRead(STwo) == HIGH && digitalRead(SThree) == HIGH) ){
    digitalWrite(ATwo,HIGH);
  }else{
    digitalWrite(ATwo,LOW);
  }



}
