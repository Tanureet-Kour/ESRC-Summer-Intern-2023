//BUZZER Output Device , very cheaper
// 2 terminals (100ohm resitance)
// GND and OUTPUT pin (PWM pin)
// NOKIA -> Ringtone text transfer message
// monophonic tunes -> one tone at atime
// multiphonic tunes

#define BUZZER_PWM_PIN 9

void setup() {
  // put your setup code here, to run once:
  pinMode(9 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(BUZZER_PWM_PIN , HIGH);
  delay(500);
  digitalWrite(BUZZER_PWM_PIN , LOW);
  delay(500);
}
