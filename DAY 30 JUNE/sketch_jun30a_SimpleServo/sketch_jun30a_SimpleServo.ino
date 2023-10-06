// Servo Motor
// Rotation of motor is known here (location known)
// Feedback based system

// (Available Motor)
// Hobby Servo Motor 
// Micro Servo Motor

// Humanoid Robots
// 0.2 seconds -> 60 degree movement possible (very fast)

//tower Pro Micro Servo 
// 3 terminals (VCC (5V), GROUND, Control(PWM-> analog avg voltage)
// PWM -> desired Position)
// Pot -> sense current Position and rotate until they become equal (comparator connnected in the circuitry)
// Arduino doesn't know the current position but a hack available (connect middle terminal of pot to th earduino)

//Different horn possibilities available with us and connected to the output motor shaft
///////////////////////////////////////////////////////////////////////////////

#include<Servo.h>//Servo Library //remote operated objects //0-180 degrees

Servo myServo;//Object cretaed for predefined class Servo
///////////////////////////////////////////////////////////////////////////////
void setup() 
{
  // put your setup code here, to run once:
  myServo.attach(9);//9 and 10 only
}
///////////////////////////////////////////////////////////////////////////////

int pos=0;

void loop() 
{
  // // put your main code here, to run repeatedly:
  // myServo.write(0);
  // delay(2000);
  
  // myServo.write(180);
  // delay(2000);

  for(pos=0; pos<=180; pos+=1)
  {
    myServo.write(pos);
    delay(15);
  }

  for(pos=180; pos>=0; pos-=1)
  {
    myServo.write(pos);
    delay(15);
  }
}
