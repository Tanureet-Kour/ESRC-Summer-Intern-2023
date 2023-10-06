#define WHITE 1
#define BLACK 0

#define IR_left 3
#define IR_right 2


// #define Motor_driver_enable 1
// #define Motor_driver_standby 0

#define Motor_left_A_pin 7
#define Motor_left_B_pin 6
// #define Motor_stanby_pin 18
#define Motor_right_A_pin 4
#define Motor_right_B_pin 5


void setup() 
{
  // Serial.begin(9600);
  // IR sensors 
  pinMode(IR_left, INPUT);
  pinMode(IR_right, INPUT);
  
  
  // left motor
  pinMode(Motor_left_A_pin, OUTPUT);
  pinMode(Motor_left_B_pin, OUTPUT);

  // pinMode(Motor_stanby_pin, OUTPUT);
 
  // right motor
  pinMode(Motor_right_A_pin, OUTPUT);
  pinMode(Motor_right_B_pin, OUTPUT);
}
//////////////////////////////////////////////////////////////////////////////////////////////////
void loop() 
{
  int l = digitalRead(IR_left);
  int r = digitalRead(IR_right);

  if(l== WHITE && r==WHITE)
  {
    motion_Forward();
  }

  if(l==BLACK && r==WHITE)
  {
    motion_Left();
  }

  if(l==WHITE && r==BLACK)
  {
    motion_Right();
  }

  if(l==BLACK && r==BLACK)
  {
    motion_Stop();
  }
}
//////////////////////////////////////////////////////////////////////////////////////////////
void motion_Forward (void)
{
  digitalWrite(Motor_left_A_pin, HIGH);
  digitalWrite(Motor_left_B_pin, LOW);

  digitalWrite(Motor_right_A_pin, HIGH);
  digitalWrite(Motor_right_B_pin, LOW);

  // digitalWrite(Motor_stanby_pin, Motor_driver_enable );
  
}

// void motion_Reverse (void)
// {
//   digitalWrite(Motor_left_A_pin, 0;
//   digitalWrite(Motor_left_B_pin, 1);

//   digitalWrite(Motor_right_A_pin, 0);
//   digitalWrite(Motor_right_B_pin, 1);

//   // digitalWrite(Motor_stanby_pin, Motor_driver_enable );
  
// }

void motion_Stop (void)
{
  digitalWrite(Motor_left_A_pin, LOW);
  digitalWrite(Motor_left_B_pin, LOW);

  digitalWrite(Motor_right_A_pin, LOW);
  digitalWrite(Motor_right_B_pin, LOW);

  // digitalWrite(Motor_stanby_pin, Motor_driver_enable );
  
}

void motion_Left (void)
{
  digitalWrite(Motor_left_A_pin, LOW);
  digitalWrite(Motor_left_B_pin, LOW);

  digitalWrite(Motor_right_A_pin, HIGH);
  digitalWrite(Motor_right_B_pin, LOW);

  // digitalWrite(Motor_stanby_pin, Motor_driver_enable );
  
}

void motion_Right (void)
{
  digitalWrite(Motor_left_A_pin, HIGH);
  digitalWrite(Motor_left_B_pin, LOW);

  digitalWrite(Motor_right_A_pin, LOW);
  digitalWrite(Motor_right_B_pin, LOW);

  // digitalWrite(Motor_stanby_pin, Motor_driver_enable );
  
}
