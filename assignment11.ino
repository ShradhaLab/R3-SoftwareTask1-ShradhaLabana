int pin2 = 2 ;//naming pin 2 as ‘pin2’  
int pin3 = 3 ;//naming pin 3 as ‘pin3’	
int pin4 = 4 ;//naming pin 4 as ‘pin4’	
int pin5 = 5 ;//naming pin 5 as ‘pin5’	
int pin8 = 8;//naming pin 8 as ‘pin8’
int pin9 = 9;//naming pin 9 as ‘pin9’
int pin10 = 10;//naming pin 10 as ‘pin10’
int pin11 = 11;//naming pin 11 as ‘pin11’
const int pot = 0 ; 	//naming pin A0 as 'pot' because it will get input from potentiometer
void setup()
{
     pinMode(pin2,OUTPUT) ;//making pin2 an output pin
  	 pinMode(pin3,OUTPUT) ;//making pin3 an output pin 
     pinMode(pin4,OUTPUT) ;//making pin4 an output pin 
     pinMode(pin5,OUTPUT) ;//making pin5 an output pin 
  	 pinMode(pin8,OUTPUT) ;//making pin8 an output pin 
  	 pinMode(pin9,OUTPUT) ;//making pin9 an output pin 
  	 pinMode(pin10,OUTPUT) ;//making pin10 an output pin 
  	 pinMode(pin11,OUTPUT) ;//making pin11 an output pin 
  	 Serial.begin(9600);//gets the serial monitor ready for messages(used to check pot. value)
}
void loop()
{
     int pot  = analogRead(0) ;//reading analog voltage and storing it in pot 
     pot = map(pot, 0, 1023, 0, 99); //scaling the potentiometer to give a range from 0 to 99  
  //if statements for the 7-seg display on the right which initialize the value of each pin, low or high, by getting the last digit of the scaled pot. value   
  if(pot%10==0){
    digitalWrite(pin2,LOW) ; //0000 = 0
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,LOW) ; 
  }
  else if(pot%10==1){
    digitalWrite(pin2,HIGH) ;//0001 = 1 
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,LOW) ; 
  }
  else if(pot%10==2){
    digitalWrite(pin2,LOW) ;//0010 = 2 
    digitalWrite(pin3,HIGH) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,LOW) ; 
  }
  else if(pot%10==3){
    digitalWrite(pin2,HIGH) ;//0011 = 3 
    digitalWrite(pin3,HIGH) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,LOW) ; 
  }
  else if(pot%10==4){
    digitalWrite(pin2,LOW) ;//0100 = 4 
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,HIGH) ; 
    digitalWrite(pin5,LOW) ; 
  }
  else if(pot%10==5){
    digitalWrite(pin2,HIGH) ;//0101 = 5 
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,HIGH) ; 
    digitalWrite(pin5,LOW) ; 
  }
   else if(pot%10==6){
    digitalWrite(pin2,LOW) ;//0110 = 6 
    digitalWrite(pin3,HIGH) ; 
    digitalWrite(pin4,HIGH) ; 
    digitalWrite(pin5,LOW) ; 
  }
   else if(pot%10==7){
    digitalWrite(pin2,HIGH) ;//0111 = 7 
    digitalWrite(pin3,HIGH) ; 
    digitalWrite(pin4,HIGH) ; 
    digitalWrite(pin5,LOW) ; 
  }
   else if(pot%10==8){
    digitalWrite(pin2,LOW) ;//1000 = 8 
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,HIGH) ; 
  }
   else if(pot%10==9){
    digitalWrite(pin2,HIGH) ;//1001 = 9 
    digitalWrite(pin3,LOW) ; 
    digitalWrite(pin4,LOW) ; 
    digitalWrite(pin5,HIGH) ; 
  }
  //if statements for the 7-seg display on the left which initialize the value of each pin, low or high, by getting the first digit of the scaled pot. value
  if(pot>=0&&pot<10){
    digitalWrite(pin8,LOW) ;//0000 = 0 
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,LOW) ; 
  }
  else if(pot>=10&&pot<20){
    digitalWrite(pin8,HIGH) ;//0001 = 1 
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,LOW) ;
  }
  else if(pot>=20&&pot<30){
    digitalWrite(pin8,LOW) ;//0010 = 2 
    digitalWrite(pin9, HIGH) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,LOW) ;
  }
  else if(pot>=30&&pot<40){
    digitalWrite(pin8,HIGH) ;//0011 = 3 
    digitalWrite(pin9,HIGH) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,LOW) ;
  }
  else if(pot>=40&&pot<50){
    digitalWrite(pin8,LOW) ;//0100 = 4 
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,HIGH) ; 
    digitalWrite(pin11,LOW) ; 
  }
  else if(pot>=50&&pot<60){
    digitalWrite(pin8,HIGH) ;//0101 = 5 
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,HIGH) ; 
    digitalWrite(pin11,LOW) ; 
  }
  else if(pot>=60&&pot<70){
    digitalWrite(pin8,LOW) ;//0110 = 6
    digitalWrite(pin9,HIGH) ; 
    digitalWrite(pin10,HIGH) ; 
    digitalWrite(pin11,LOW) ; 
  }
  else if(pot>=70&&pot<80){
    digitalWrite(pin8,HIGH) ;//0111 = 7 
    digitalWrite(pin9,HIGH) ; 
    digitalWrite(pin10,HIGH) ; 
    digitalWrite(pin11,LOW) ; 
  }
  else if(pot>=80&&pot<90){
    digitalWrite(pin8,LOW) ;//1000 = 8 
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,HIGH) ; 
  }
  else if(pot>=90&&pot<100){
    digitalWrite(pin8,HIGH) ;//1001 = 9
    digitalWrite(pin9,LOW) ; 
    digitalWrite(pin10,LOW) ; 
    digitalWrite(pin11,HIGH) ; 
  }
    //the below println was used to check whether the correct values of potentiometer are being displayed on the 7-seg displays
  	//Serial.println(pot);
}