#define IR_SENSOR_PIN 2
#define WHITE 1
#define BLACK 0

int sensorData;
int sampleNumber = 0;

void setup()
{
  pinMode( IR_SENSOR_PIN , INPUT);
  Serial.begin(9600);
}

void loop()
{
  Serial.print(sampleNumber);

  sensorData = digitalRead( IR_SENSOR_PIN );
  
  if( sensorData == WHITE )
  {
    Serial.println(" WHITE ");
  }
  else
  {
    Serial.println(" BLACK ");
  }

  delay(200);
  sampleNumber++;
}