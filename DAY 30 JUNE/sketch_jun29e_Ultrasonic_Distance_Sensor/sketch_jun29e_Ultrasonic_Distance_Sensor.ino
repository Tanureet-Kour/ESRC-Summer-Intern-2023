// Ultrasonic Distance Sensor -> No Contact Distance Sensor
// Human Range( 20-20,000 KHz )
// 40KHz -> cannot be detected by humans
// ultrasonic sound frequencies emit , hit the object , echo back 
// total time/2 
// distance can be calculated 
// sound velocity = 320 m/s

// MOdel -> HCSR04 (3mm accuracy) 
// Distance (1cm - 400cm)
// straight aim at object
// 15 degree +- in angular 
// 0.5 msquare area required
// 10 microseconds ki pulse
// 8 small cycles sonic sound bursts
// receive high pule duration in proportional to the distance

//40 kHz frequency burst-> object-> echo ->total time in microsec /2 -> oneway distance -> velocity of sound(340m/s)
// transmitter and receiver
// 4 Pins 
// 2 Supply pins ( VCC(+5V) and Ground )
// 1 pin to Trigger (Output pin)
// 1 pin to Receive(echo sound) (Input pin)

//pulseIn(pin , value) // HIGH or LOW value , listen pulse with high/low value
//return length of the pulse in microseconds
//pulseIn(pin , value, timeout) till what time to listen for a pulse
//unsigned long microseconds 4,294,967,295 (2^32 - 1)

// Unit Conversion in datasheet fot the sensor
// microsec / 58 = cm
// microsec / 148 = inch
// range = high level time * elocity of sound (340m/s)
////////////////////////////////////////////////////////////////////////////////


#define TRIGGER_OP_PIN 13 //for emitting 10 microseconds pulse
#define ECHO_IP_PIN 12 //receiving sound echo
///////////////////////////////////////////////////////////////////////
void setup() 
{
  // put your setup code here, to run once:
  pinMode(TRIGGER_OP_PIN, OUTPUT);
  pinMode(ECHO_IP_PIN, INPUT);
  Serial.begin(9600);
}
////////////////////////////////////////////////////////////////////////
long duration , dist_inch, dist_cm ;
////////////////////////////////////////////////////////////////////////
void loop() 
{
  // put your main code here, to run repeatedly:

  //emit a triggering pulse of 10 microseconds initially
  digitalWrite(TRIGGER_OP_PIN, HIGH);
  delay(10);
  digitalWrite(TRIGGER_OP_PIN, LOW);


  // get the time that it takes for the pulse to return
  // pulseIn waits fro the pulse and returns nuber of microseconds
  // divided by two because sound travels there and back again
  duration = (pulseIn(ECHO_IP_PIN, HIGH) /2 );

  //Conversion from microseconds to inches and centieters and provided in datasheet of ultrasonic distance sensors
  dist_inch = duration/74;
  dist_cm   = duration/29;

  //Print the distance as calculated by the echo pin
  Serial.print(dist_cm);
  Serial.print(" cm;");

  Serial.print(dist_inch);
  Serial.println(" inch");

  Serial.println("");

  delay(1000);
}
