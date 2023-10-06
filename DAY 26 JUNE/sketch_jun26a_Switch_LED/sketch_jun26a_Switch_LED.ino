// TO SWITCH ON AND OFF LED USING SWITCH AS AN INPUT TO THE MICROCONTROLLER

#define SWITCH_BTN 12
#define B_LED 13

int mode ;//SWITCH MODE (HIGH/LOW)

void setup()
{
  pinMode( SWITCH_BTN , INPUT_PULLUP); //PULL UP inbuilt resistor in AMC that gives logic 1 output when input is logic 0 
  pinMode( B_LED , OUTPUT);
}

void loop()
{
  mode = digitalRead(SWITCH_BTN);

  if(mode == LOW )// LED off and BUTTON presses
  {
    digitalWrite( B_LED , HIGH);
  }
  if(mode == HIGH )//LED On and BUTTON presses
  {
    digitalWrite( B_LED , LOW);
  }
}