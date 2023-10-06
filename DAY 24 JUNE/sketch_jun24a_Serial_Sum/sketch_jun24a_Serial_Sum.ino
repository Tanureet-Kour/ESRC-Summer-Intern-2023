#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define dp 9

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(9600);
}

int A;
int B;
int sum;

void loop() 
{
  Serial.print("First Number: ");
  while(Serial.available() == 0){
  }
  A = Serial.parseInt();
  Serial.print("Number 1 : ");
  Serial.print(A);

  Serial.print("Second Number: ");
  while(Serial.available() == 0){
  }
  B = Serial.parseInt();
  Serial.print("Number 2 : ");
  Serial.print(B);

  sum = A + B;

  Serial.print("Sum is: ");
  Serial.println(sum);

  displaySum(sum);

  Serial.print("Congratulations you completed the task successfully !");

}

void displaySum(int n)
{
  if(sum<0 || sum>9)
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
    switch(sum)
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
