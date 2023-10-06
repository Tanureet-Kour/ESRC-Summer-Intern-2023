// constants won't change
const int Motor_PWM_pin = 9; // the Arduino pin connected to the EN1 pin L298N
const int Motor_A_pin = 6; // the Arduino pin connected to the IN1 pin L298N
const int Motor_B_pin = 5; // the Arduino pin connected to the IN2 pin L298N

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins as outputs.
  pinMode(Motor_PWM_pin, OUTPUT);
  pinMode(Motor_A_pin, OUTPUT);
  pinMode(Motor_B_pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Motor_A_pin, HIGH); // control motor A spins clockwise
  digitalWrite(Motor_B_pin, LOW);  // control motor A spins clockwise

  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(Motor_PWM_pin, speed); // control the speed
    delay(10);
  }

  delay(1000); // rotate at maximum speed 1 seconds in in clockwise direction

  // change direction
  digitalWrite(Motor_A_pin, LOW);   // control motor A spins anti-clockwise
  digitalWrite(Motor_B_pin, HIGH);  // control motor A spins anti-clockwise

  delay(1000); // rotate at maximum speed 1 seconds in in anti-clockwise direction

  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(Motor_PWM_pin, speed); // control the speed
    delay(10);
  }

  delay(1000); // stop motor 1 second
}