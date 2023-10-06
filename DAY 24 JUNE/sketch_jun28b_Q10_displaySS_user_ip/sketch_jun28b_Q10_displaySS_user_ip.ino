#define a 2
#define b 3
#define c 4
#define d 5
#define e 7
#define f 8
#define g 9
#define dp 10
///////////////////////////////////////////////////////////////////////////////
void setup() 
{
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  Serial.begin(9600);
}
////////////////////////////////////////////////////////////////////////////////
void loop() 
{
  // put your main code here, to run repeatedly:
  int initial_SS = -1;
  display_SS(initial_SS);//Switch off SSD shows dp pin high only
  Serial.print("Which digit to display on SSD(0-9): ");
  while(Serial.available()==0)
  {
    //EMPTY LOOP to prompt the user for input
  }
  int user_ip = Serial.parseInt();
  Serial.print("User want to display number: ");
  Serial.print(user_ip);

  display_SS(user_ip);
  delay(10000);//10seconds
}
////////////////////////////////////////////////////////////////////////////////
void display_SS(int n)
{
  if(n<0 || n>9)
  {
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(dp, HIGH);
  }

  else
  {
    switch(n)
    {
      case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      break;

      case 1:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e,  LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      break;

      case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 4:
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 5:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 6:
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 7:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      break;

      case 8:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;

      case 9:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(dp, LOW);
      break;
    }
  }
}