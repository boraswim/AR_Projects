#include <IRremote.h>

#define RedKey 16753245
#define GreenKey 16736925
#define YellowKey 16769565

boolean Red = false;
boolean Green = false;
boolean Yellow = false;

int RECV_PIN = A0;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(A4,OUTPUT);
  pinMode(A5,OUTPUT);
  pinMode(10,OUTPUT);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)){
    switch (results.value) {
      case RedKey:
        if (Red){
          digitalWrite(A1,LOW);
          digitalWrite(A4,LOW);
          Red = false;
        }
        else
        {
          digitalWrite(A1,HIGH);
          digitalWrite(A4,HIGH);
          Red = true;
        }
        break;
        case GreenKey:
        if(Green){
          digitalWrite(A2,LOW);
          digitalWrite(A5,LOW);
          Green = false;
        }
        else{
          digitalWrite(A2,HIGH);
          digitalWrite(A5,HIGH);
          Green = true;
        }
        break;
        case YellowKey:
        if (Yellow){
          digitalWrite(A3,LOW);
          digitalWrite(10,LOW);
          Yellow = false;
        }
        else{
          digitalWrite(A3,HIGH);
          digitalWrite(10,HIGH);
          Yellow = true;
        }
        break;
    }
    delay(500);
    irrecv.resume();
      
  
    }
  }
