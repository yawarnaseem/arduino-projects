        
#include <IRremote.h>

#define first_key 0xFF30CF
#define second_key 0xFF18E7
#define third_key 0xFF7A85 
#define fourth_key 0xFF10EF
#define fifth_key 0xFF38C7 
#define sixth_key 0xFF5AA5  
#define seventh_key 0xFF42BD    
#define eighth_key 0xFF4AB5 
#define pwr_key 0xFFA25D
#define stp_key 0xFF629D
#define mut_key 0xFFE21D
int receiver_pin = 13;

int first_led_pin = 4;
int second_led_pin = 5;
int third_led_pin = 6;
int fourth_led_pin = 7;
int fifth_led_pin = 8;
int sixth_led_pin = 9; 
int seventh_led_pin = 10;
int eighth_led_pin = 11;
   //int all_pin = 4,5,6,7,8,9,10,11
int k;
int led[] = {0,0,0,0,0,0,0,0,0,0,0,0};
IRrecv receiver(receiver_pin);
decode_results output;

void setup()
{
Serial.begin(9600);
receiver.enableIRIn();
pinMode(first_led_pin, OUTPUT);
pinMode(second_led_pin, OUTPUT);
pinMode(third_led_pin, OUTPUT);
pinMode(fourth_led_pin, OUTPUT);
pinMode(fifth_led_pin, OUTPUT);
pinMode(sixth_led_pin, OUTPUT);
pinMode(seventh_led_pin, OUTPUT);
pinMode(eighth_led_pin, OUTPUT);
}

void loop() {
  
if (receiver.decode(&output)) {
unsigned int value = output.value;
switch(value) {
case first_key: 
if(led[1] == 1) {
digitalWrite(first_led_pin, LOW);
led[1] = 0;
} else {
digitalWrite(first_led_pin, HIGH);
led[1] = 1;
}
break;
case second_key:

if(led[2] == 1) {
digitalWrite(second_led_pin, LOW);
led[2] = 0;
} else {
digitalWrite(second_led_pin, HIGH);
led[2] = 1;
}
break;
case third_key:

if(led[3] == 1) {
digitalWrite(third_led_pin, LOW);
led[3] = 0;
} else {
digitalWrite(third_led_pin, HIGH);
led[3] = 1;
}
break;
case fourth_key:

if(led[4] == 1) {
digitalWrite(fourth_led_pin, LOW);
led[4] = 0;
} else {
digitalWrite(fourth_led_pin, HIGH);
led[4] = 1;
}
break;
case fifth_key:
if(led[5] == 1) {
digitalWrite(fifth_led_pin, LOW);
led[5] = 0;
} else {
digitalWrite(fifth_led_pin, HIGH);
led[5] = 1;
}
break;
case sixth_key:
if(led[6] == 1) {
digitalWrite(sixth_led_pin, LOW);
led[6] = 0;
} else {
digitalWrite(sixth_led_pin, HIGH);
led[6] = 1;
}
break;
case seventh_key:
if(led[7] == 1) {
digitalWrite(seventh_led_pin, LOW);
led[7] = 0;
} else {
digitalWrite(seventh_led_pin, HIGH);
led[7] = 1;
}
break;
case eighth_key:
if(led[8] == 1) {
digitalWrite(eighth_led_pin, LOW);
led[8] = 0;
} else {
digitalWrite(eighth_led_pin, HIGH);
led[8] = 1;
}
break;

case pwr_key: 
if(led[1,2,3,4,5,6,7,8] == 1) {
digitalWrite(first_led_pin, LOW);
digitalWrite(second_led_pin, LOW);
digitalWrite(third_led_pin, LOW);
digitalWrite(fourth_led_pin, LOW);
digitalWrite(fifth_led_pin, LOW);
digitalWrite(sixth_led_pin, LOW);
digitalWrite(seventh_led_pin, LOW);
digitalWrite(eighth_led_pin, LOW);
led[1,2,3,4,5,6,7,8] = 0;
} else {
digitalWrite(first_led_pin, HIGH);
digitalWrite(second_led_pin, HIGH);
digitalWrite(third_led_pin, HIGH);
digitalWrite(fourth_led_pin, HIGH);
digitalWrite(fifth_led_pin, HIGH);
digitalWrite(sixth_led_pin, HIGH);
digitalWrite(seventh_led_pin, HIGH);
digitalWrite(eighth_led_pin, HIGH);
led[1,2,3,4,5,6,7,8] = 1;
}
break;
case mut_key:
 for (k=0;k<5;k++){
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
                   }
break;

}
Serial.println(value);
receiver.resume();
}
}
