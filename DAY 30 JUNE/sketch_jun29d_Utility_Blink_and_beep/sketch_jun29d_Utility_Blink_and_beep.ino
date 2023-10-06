// Generating utility functions for buzzer respectively which can be reused in our futuristic arduino codes
#define BLUE_LED_PIN 2
#define BUZZER_PIN 9//PWM PIN
////////////////////////////////////////////////////////////////////////////////
void setup() 
{
  // put your setup code here, to run once:
  pinMode(BLUE_LED_PIN , OUTPUT);
  pinMode(BUZZER_PIN , OUTPUT);
}
////////////////////////////////////////////////////////////////////////////////
void loop() 
{
  // put your main code here, to run repeatedly:
  beep(5, 200);
  blink(10, 500);
}
////////////////////////////////////////////////////////////////////////////////


//Utility Classes
void beep(int beepCount , int beepDelay)
{
  while(beepCount--)
  {
    digitalWrite(BUZZER_PIN , HIGH);
    delay(beepDelay/2);

    digitalWrite(BUZZER_PIN , LOW);
    delay(beepDelay/2);
  }
}
/////////////////////////////////////////////
void blink(int blinkCount, int blinkDelay)
{
  while(blinkCount--)
  {
    digitalWrite(BLUE_LED_PIN , HIGH);
    delay(blinkDelay/2);

    digitalWrite(BLUE_LED_PIN , LOW);
    delay(blinkDelay/2);
  }
}
/////////////////////////////////////////////