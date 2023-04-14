#define red 13
#define yellow 12
#define green  11
void setup() {
pinMode(red,OUTPUT) ; 
pinMode(green,OUTPUT) ; 
pinMode(yellow,OUTPUT) ; 

digitalWrite(red,LOW) ; 
digitalWrite(yellow,LOW) ; 
digitalWrite(green,LOW) ; 

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
digitalWrite(yellow,LOW);
digitalWrite(green,LOW);
delay(4000) ;
digitalWrite(red,LOW);
digitalWrite(yellow,HIGH);
digitalWrite(green,LOW);
delay(2000) ;
digitalWrite(red,LOW);
digitalWrite(yellow,LOW);
digitalWrite(green,HIGH);
delay(3000) ;
}
