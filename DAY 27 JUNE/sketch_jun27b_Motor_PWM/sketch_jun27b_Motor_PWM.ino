#define Motor_A_pin 4
#define Motor_B_pin 5
#define Motor_PWM_pin 3

void setup() 
{
  pinMode(Motor_A_pin, OUTPUT);
  pinMode(Motor_B_pin, OUTPUT);
  pinMode(Motor_PWM_pin , OUTPUT);
}
////////////////////////////////////////////////////////////////////////
void loop() 
{
  //////Motion Forward
  for(int i=0 ; i<=255 ; i++)
  {
    motion_Clock(i);
    delay(52);
  }
  //Delay for few seconds while reversing the direction
  delay(500);


  ////Motion Reverse
  for(int i=0 ; i<=255 ; i++)
  {
    motion_AntiClock(i);
    delay(52);
  }
  //Delay for few seconds while reversing the direction
  delay(500);


  ///////Motion Stop
  motion_Stop(0);
  // delay(1000);
}
//////////////////////////////////////////////////////////////////////////

//Function Definition

//Clockwise Direction
void motion_Clock(int speed)
{
  analogWrite(Motor_PWM_pin, speed);
  digitalWrite(Motor_A_pin, HIGH);
  digitalWrite(Motor_B_pin, LOW);
}
//AntiClockwise Direction
void motion_AntiClock(int speed)
{
  analogWrite(Motor_PWM_pin, speed);
  digitalWrite(Motor_A_pin, LOW );
  digitalWrite(Motor_B_pin, HIGH);
}
//Stop Motor
void motion_Stop()
{
  analogWrite(Motor_PWM_pin, speed);
  digitalWrite(Motor_A_pin, LOW );
  digitalWrite(Motor_B_pin, LOW);
}

