#define Motor_A_pin 3
#define Motor_B_pin 4
// #define Motor_PWM_pin 18
/////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() 
{
  pinMode(Motor_A_pin, OUTPUT);
  pinMode(Motor_B_pin, OUTPUT);
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() 
{
  motion_AntiClock();
  delay(1000);

  motion_Clock();
  delay(1000);

  motion_Stop();
  delay(1000);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function Definitions
void motion_AntiClock ()
{
  digitalWrite(Motor_A_pin, HIGH);
  digitalWrite(Motor_B_pin, LOW);
}

void motion_Clock ()
{
  digitalWrite(Motor_A_pin, LOW);
  digitalWrite(Motor_B_pin, HIGH);
}

void motion_Stop ()
{
  digitalWrite(Motor_A_pin, LOW);
  digitalWrite(Motor_B_pin, LOW);
}
