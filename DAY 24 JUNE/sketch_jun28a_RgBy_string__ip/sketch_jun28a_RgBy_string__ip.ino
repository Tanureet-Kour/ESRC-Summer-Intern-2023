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

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("PLease enter your desired Sequence (follow RGBY only): ");
  while(Serial.available()==0)
  {
    //EMPTY LOOP to prompt the user for input
  }
  String led_series = Serial.readString();
  Serial.print("Desired Sequence is: ");
  Serial.println(led_series);

  Serial.println(led_series.charAt(0));
  Serial.println(led_series.charAt(1));
  Serial.println(led_series.charAt(2));
  Serial.println(led_series.charAt(3));

  //RED LED
  if(led_series.charAt(0)=="R")
  {
    digitalRead(R_LED , HIGH);
  }
  if(led_series.charAt(0)=="r")
  {
    digitalRead(R_LED , LOW);
  }

  //GREEN LED
  if(led_series.charAt(1)=="G")
  {
    digitalRead(G_LED , HIGH);
  }
  if(led_series.charAt(1)=="g")
  {
    digitalRead(G_LED , LOW);
  }

  //BLUE LED
  if(led_series.charAt(2)=="B")
  {
    digitalRead(B_LED , HIGH);
  }
  if(led_series.charAt(2)=="b")
  {
    digitalRead(B_LED , LOW);
  }

  //YELLOW LED
  if(led_series.charAt(3)=="Y")
  {
    digitalRead(Y_LED , HIGH);
  }
  if(led_series.charAt(3)=="y")
  {
    digitalRead(Y_LED , LOW);
  }
}
