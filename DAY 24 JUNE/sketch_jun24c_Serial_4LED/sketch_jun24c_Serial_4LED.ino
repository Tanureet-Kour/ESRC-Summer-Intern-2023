//initialising LEDs the arduino pins
#define R_LED 2
#define G_LED 3
#define B_LED 4
#define Y_LED 5

void setup() {
  // put your setup code here, to run once:
  pinMode(R_LED , OUTPUT);
  pinMode(G_LED , OUTPUT);
  pinMode(B_LED , OUTPUT);
  pinMode(Y_LED , OUTPUT);

  Serial.begin(9600);
}

char user_ip;

void loop() 
{
  Serial.print("Hurray !");

  //RED LED ON/OFF
  Serial.print("Do you want to glow RED LED ? : y/n");
  while(Serial.available() == 0){
  }
  user_ip = Serial.read();
  Serial.println("User enters : ");
  Serial.print(user_ip);

  if(user_ip == 'y')
  {
    digitalWrite(R_LED , HIGH);
  }
  else if(user_ip == 'n')
  {
    digitalWrite(R_LED , LOW);
  }

  
  //GREEN LED ON/OFF
  Serial.println("Do you want to glow GREEN LED ? : y/n");
  while(Serial.available() == 0){
    }
  user_ip = Serial.read();
  Serial.print("User enters : ");
  Serial.print(user_ip);

  if(user_ip == 'y')
  {
    digitalWrite(G_LED , HIGH);
    delay(1000);
    digitalWrite(G_LED , LOW);
  }
  else if(user_ip == 'n')
  {
    digitalWrite(R_LED , LOW);
  }

  
  //BLUE LED ON/OFF
  Serial.println("Do you want to glow BLUE LED ? : y/n");
  while(Serial.available() == 0){
    }
  user_ip = Serial.read();
  Serial.print("User enters : ");
  Serial.print(user_ip);

  if(user_ip == 'y')
  {
    digitalWrite(B_LED , HIGH);
    delay(1000);
    digitalWrite(B_LED , LOW);
  }
  else if(user_ip == 'n')
  {
    digitalWrite(R_LED , LOW);
  }

  
  //YELLOW LED ON/OFF
  Serial.println("Do you want to glow YELLOW LED ? : y/n");
  while(Serial.available() == 0){
    }
  user_ip = Serial.read();
  Serial.print("User enters : ");
  Serial.print(user_ip);

  if(user_ip == 'y')
  {
    digitalWrite(Y_LED , HIGH);
    delay(1000);
    digitalWrite(Y_LED , LOW);
  }
  else if(user_ip == 'n')
  {
    digitalWrite(Y_LED , LOW);
  }

  Serial.print("Congratulations you completed the task successfully !");
}
