//Develop a brightness control for seven segment display . Using the
//serial terminal to ask the user: 
//How bright the display would (he/she) like ?
//Give few options.
// 0 Off
// 1 Dimmer
// 2 Dim
// 3 Bright
// 4 Brighter
// 5 Brightest
// Use DP to indicate input error. User proper messages on serial terminal to 
// interact  with the user (evn while giving error messages).

// #define a 2
#define b 3
#define c 5
// #define d 5
// #define e 6
// #define f 7
// #define g 8
#define dp 6

void setup() {
  // put your setup code here, to run once:
  // pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  // pinMode(d, OUTPUT);
  // pinMode(e, OUTPUT);
  // pinMode(f, OUTPUT);
  // pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);
  Serial.begin(9600);
}

int user_ip;
int ss_ip;

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("1 available on Seven Segment");
  display_SS(1);
  
  Serial.println("How bright the display would you like ?");
  Serial.println("  0 :  Off ");
  Serial.println("  1 :  Dimmer ");
  Serial.println("  2 :  Dim ");
  Serial.println("  3 :  Bright ");
  Serial.println("  4 :  Brighter ");
  Serial.println("  5 :  Brightest ");
  Serial.println(" ");
  Serial.println(" ");

  while(Serial.available() == 0)
  {
    //Empty Loop
  }
  user_ip = Serial.parseInt();

  if( user_ip == 0 )
  {
    analogWrite(b ,0);
    analogWrite(c ,0);
    analogWrite(dp ,0);
  }
  if( user_ip == 1 )
  {
    analogWrite(b ,50);
    analogWrite(c ,50);
    analogWrite(dp ,50);
  }
  if( user_ip == 2 )
  {
    analogWrite(b ,63);
    analogWrite(c ,63);
    analogWrite(dp ,63);
  }
  if( user_ip == 3 )
  {
    analogWrite(b ,127);
    analogWrite(c ,127);
    analogWrite(dp ,127);
  }
  if( user_ip == 4 )
  {
    analogWrite(b ,190);
    analogWrite(c ,190);
    analogWrite(dp ,190);;
  }
  if( user_ip == 5 )
  {
    analogWrite(b ,255);
    analogWrite(c ,255);
    analogWrite(dp ,255);
  }



  Serial.print("Congratulations you completed the task successfully !");
}

////////////////////////////////////////////////////////////////////////////////
void display_SS(int n)
{
  if(n<0 || n>9)
  {
    // digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    // digitalWrite(d, LOW);
    // digitalWrite(e, LOW);
    // digitalWrite(f, LOW);
    // digitalWrite(g, LOW);
    digitalWrite(dp, HIGH);
  }

  else
  {
    switch(n)
    {
      // case 0:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, HIGH);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, LOW);
      // digitalWrite(dp, LOW);
      // break;

      case 1:
      // digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      // digitalWrite(d, LOW);
      // digitalWrite(e,  LOW);
      // digitalWrite(f, LOW);
      // digitalWrite(g, LOW);
      digitalWrite(dp, LOW);
      break;

      // case 2:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, LOW);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, HIGH);
      // digitalWrite(f, LOW);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 3:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, LOW);
      // digitalWrite(f, LOW);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 4:
      // digitalWrite(a, LOW);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, LOW);
      // digitalWrite(e, LOW);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 5:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, LOW);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, LOW);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 6:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, LOW);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, HIGH);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 7:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, LOW);
      // digitalWrite(e, LOW);
      // digitalWrite(f, LOW);
      // digitalWrite(g, LOW);
      // digitalWrite(dp, LOW);
      // break;

      // case 8:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, HIGH);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;

      // case 9:
      // digitalWrite(a, HIGH);
      // digitalWrite(b, HIGH);
      // digitalWrite(c, HIGH);
      // digitalWrite(d, HIGH);
      // digitalWrite(e, LOW);
      // digitalWrite(f, HIGH);
      // digitalWrite(g, HIGH);
      // digitalWrite(dp, LOW);
      // break;
    }
  }
}

