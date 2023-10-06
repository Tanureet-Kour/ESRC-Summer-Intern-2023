/* TO INCREMENT AND DECREMENT THE VALUE IN SEVEN SEGMENT  DISPLAY USING TWO SWITCHES 
PERFORMING THEIR RESPECTIVE OPERATIONS */

//SWITCH
#define SWITCH_G_INC 11
#define SWITCH_R_DEC 10 

//SWITCH MODE (HIGH/LOW)
int mode_INC ;//storing the output of the inc switch
int mode_DEC ;//storing the output of the dec switch

//LED's
#define G_LED_INC 12 //SHowing the green light when we are incrementing
#define R_LED_DEC 13 //Showing the red light when we are decrementing

//SEVEN SEGMENT DISPLAY
#define ss_a 2
#define ss_b 3
#define ss_c 4
#define ss_d 5
#define ss_e 6
#define ss_f 7
#define ss_g 8
#define ss_dp 9

void setup()
{
  pinMode( SWITCH_G_INC , INPUT_PULLUP);
  pinMode( SWITCH_R_DEC , INPUT_PULLUP);
  
  pinMode( G_LED_INC , OUTPUT);
  pinMode( R_LED_DEC , OUTPUT);

  pinMode( ss_dp , OUTPUT);
  pinMode( ss_a , OUTPUT);
  pinMode( ss_b , OUTPUT);
  pinMode( ss_c , OUTPUT);
  pinMode( ss_d , OUTPUT);
  pinMode( ss_e , OUTPUT);
  pinMode( ss_f , OUTPUT);
  pinMode( ss_g , OUTPUT);
}

int number= 0;

void loop()
{
  display_in_SS(number);//At start display 0

//mode_INC G_LED_INC
  if(!digitalRead(SWITCH_G_INC))
  {
    digitalWrite( G_LED_INC , HIGH);
    delay(500);
    digitalWrite( G_LED_INC , LOW); 
    number++;
  }

//mode_DEC RED_LED_DEC 
  if(!digitalRead(SWITCH_R_DEC))
  {
    digitalWrite( R_LED_DEC, HIGH);
    delay(500);
    digitalWrite( G_LED_INC , LOW); 
    number--;
  }
}


void display_in_SS(int n)
{
  if(n>9 || n<0)
  {
    digitalWrite( ss_dp , HIGH);
    //clear the display
    digitalWrite( ss_a , LOW);
    digitalWrite( ss_b , LOW);
    digitalWrite( ss_c , LOW);
    digitalWrite( ss_d , LOW);
    digitalWrite( ss_e , LOW);
    digitalWrite( ss_f , LOW);
    digitalWrite( ss_g , LOW);
  }
  else{

    switch(n)
    {
      case 0: 
              digitalWrite( ss_a , HIGH);//0
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_e , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , LOW);
              digitalWrite( ss_dp , LOW);
              break;
      case 1: 
              digitalWrite( ss_a , LOW);
              digitalWrite( ss_d , LOW);
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_f , LOW);
              digitalWrite( ss_g , LOW);
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_b , HIGH);//1
              digitalWrite( ss_c , HIGH);
              break;
      case 2: 
              digitalWrite( ss_c , LOW);
              digitalWrite( ss_f , LOW);
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_a , HIGH);//2
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_e , HIGH);
              digitalWrite( ss_g , HIGH);            
              break;
      case 3: 
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_f , LOW);
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_a , HIGH);//3
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_g , HIGH);            
              break;

      case 4: 
              digitalWrite( ss_a , LOW);
              digitalWrite( ss_d , LOW);
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_b , HIGH);//4
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , HIGH);            
              break;

      case 5: 
              digitalWrite( ss_b , LOW);
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_a , HIGH);//5
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , HIGH);            
              break;

      case 6: 
              digitalWrite( ss_dp , LOW);
              digitalWrite( ss_b , LOW);
              digitalWrite( ss_a , HIGH);//6
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_e , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , HIGH);            
              break;

      case 7: digitalWrite( ss_a , HIGH);//7
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , LOW);
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_f , LOW);
              digitalWrite( ss_g , LOW);
              digitalWrite( ss_dp , LOW);
              break;

      case 8: digitalWrite( ss_a , HIGH);//8
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_e , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , HIGH); 
              digitalWrite( ss_dp , LOW);           
              break;
      case 9: digitalWrite( ss_a , HIGH);//9
              digitalWrite( ss_b , HIGH);
              digitalWrite( ss_c , HIGH);
              digitalWrite( ss_d , HIGH);
              digitalWrite( ss_f , HIGH);
              digitalWrite( ss_g , HIGH); 
              digitalWrite( ss_e , LOW);
              digitalWrite( ss_dp , LOW);           
              break;
    }
  }
}
