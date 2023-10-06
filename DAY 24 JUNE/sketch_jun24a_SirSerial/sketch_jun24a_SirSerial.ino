char data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("\r\n FIRST: PLease enter something: ");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    data = Serial.read();

    Serial.print("You Entered: ");
    Serial.print(data);
    Serial.print("\r\n Please enter something: ");
  }
  delay(1000);
}
