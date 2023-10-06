#define RED_LED 4
#define YELLOW_LED 5
#define GREEN_LED 3
#define BLUE_LED 2

void setup() {
  // put your setup code here, to run once:
  pinMode(RED_LED,OUTPUT);
  pinMode(YELLOW_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(BLUE_LED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(BLUE_LED,HIGH);

  delay(1500);

  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,HIGH);
  digitalWrite(BLUE_LED,LOW);

  delay(1500);

  digitalWrite(RED_LED,LOW);
  digitalWrite(YELLOW_LED,HIGH);
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(BLUE_LED,LOW);

  delay(1500);

  digitalWrite(RED_LED,HIGH);
  digitalWrite(YELLOW_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(BLUE_LED,LOW);

  delay(1500);
}
