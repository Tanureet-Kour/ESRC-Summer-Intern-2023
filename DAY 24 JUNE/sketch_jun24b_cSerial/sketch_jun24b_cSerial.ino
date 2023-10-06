
unsigned char c=0;
int count=0;

void setup() {
  Serial.begin(9600);
  Serial.println("\r\n Hurray! ");
}

void loop() {
  unsigned char c=0;
  while(true)
  {
    Serial.println(c);
    count++;
    c++;

  if(c==0)
  {
    Serial.print("Second Zero Encountered at :");
    Serial.println(count);
     break;
  }
  delay(850);
  }
}
