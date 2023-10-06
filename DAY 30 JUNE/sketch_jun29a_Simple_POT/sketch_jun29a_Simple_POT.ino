// Analog Input(analogRead() Function)
// Potentiometer Interfacing (based on the principle of variable resistance)
// +5V  and GROUND  (5V 3.75V 2.5V 1.25V 0V)  slider or radio volume control
// Three terminals (Voltage, Wiper, Ground)
// Used for calculating angular movement(270 degrees) easily having very cheap price. 
// analogRead() Function returns int values ranging from 0 to 1023 (mapped between 0V and 5V)
// 6 analog pins A0 to A5

#define POT_IP_PIN A0

int pot_value;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(POT_IP_PIN , INPUT);
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  pot_value = analogRead(POT_IP_PIN);
  Serial.println(pot_value);
  delay(1000);//100 milliseconds
}
