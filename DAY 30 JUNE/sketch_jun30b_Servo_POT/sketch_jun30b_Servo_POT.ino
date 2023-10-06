//Chocolate Thief
#include<Servo.h>
#define TRIGGER_PIN 13
#define ECHO_PIN    12
Servo myServo;
//////////////////////////////////////////////////////////////////////
long duration , dist_cm;
//////////////////////////////////////////////////////////////////////
void setup() 
{
  myServo.attach(9);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN   , INPUT);
}
//////////////////////////////////////////////////////////////////////
void loop() 
{
  
  //Emitting Triggering Pulse
  digitalWrite(TRIGGER_PIN, HIGH);
  delay(10);
  digitalWrite(TRIGGER_PIN, LOW);

  duration = ( pulseIn(ECHO_PIN , HIGH) / 2) ;
  dist_cm = duration/29;
  Serial.println(dist_cm);
  Serial.println("cm");
  Serial.println("");
  delay(50);
  // delay(1000);

  if(dist_cm <= 10)
  {
  myServo.write(90);
  }
  else
  {
    myServo.write(45);
  }
}

