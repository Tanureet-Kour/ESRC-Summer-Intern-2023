#include<Servo.h>
Servo myServo;
//////////////////////////////////////////////////////////////////
void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  Serial.begin(9600);
}
///////////////////////////////////////////////////////////////////
int pos;
///////////////////////////////////////////////////////////////////
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Enter the degrees you want to rotate: ");
  while(Serial.available()==0)
  {
    //EMPTY LOOP to prompt the user
  }
  pos = Serial.parseInt();
  Serial.println("Entered Degrees: %d",pos);
  // Serial.print(pos);

  myServo.write(pos);
  delay(150);
}
