//To change the blinking rate of LED using potentiometer

#define BLUE_LED_PIN 2 
#define POT_PIN A0

int pot_value;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(BLUE_LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  pot_value = analogRead(POT_PIN);
  Serial.println(pot_value);
  
  digitalWrite(BLUE_LED_PIN , HIGH);
  delay(pot_value);
  digitalWrite(BLUE_LED_PIN , LOW);
  delay(pot_value);
}
