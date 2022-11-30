#include <LiquidCrystal.h> // includes the LiquidCrystal Library
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
const int trigPin = 13;
const int echoPin = 12;
long duration;
int distanceCm, distanceInch;
#include<Servo.h>
Servo Myservo;
int pos;
void setup() {
  Myservo.attach(3);
  lcd.begin(16, 2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(50);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(50);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distanceCm = duration * 0.034 / 2;
  distanceInch = duration * 0.0133 / 2;
  lcd.setCursor(0, 0); // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Distance: "); // Prints string "Distance" on the LCD
  lcd.print(distanceCm); // Prints the distance value from the sensor
  lcd.print(" cm");
  delay(10);
  lcd.setCursor(0, 1);
  lcd.print("Distance: ");
  lcd.print(distanceInch);
  lcd.print(" inch");
  delay(10);
    
}

