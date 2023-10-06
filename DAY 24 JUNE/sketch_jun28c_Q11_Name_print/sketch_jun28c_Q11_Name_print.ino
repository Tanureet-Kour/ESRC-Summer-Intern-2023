void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  Serial.print("0: Please enter your First Name: ");
  while(Serial.available()==0)
  {
    //EMPTY LOOP to prompt the user
  }
  String f_name = Serial.readString();
  
  Serial.print("I: ");
  Serial.println(f_name);

  Serial.print("The total length of the name is: ");
  Serial.println(f_name.length());

  f_name.toUpperCase();

  for(int i=0; i<1; i++)//0
  {
    for(int j=0; j<=f_name.length(); j++)//0 1 2 3
    {
      Serial.print("+---+");
      Serial.print("| %d |",f_name.charAt(i));
      Serial.print("+---+");
    }
  }
}
