/*************************************************** 
 * This code blinks 14 leds sequentially,
 * in order to test most of Intel Edison's ports (0 to 13).
 * 
 * Written by Clovis Fritzen (clovisf AT gmail DOT com ) in 10/18/2015.
 * http://embedded-clovis.blogspot.ca/
 * http://www.twitter.com/clovisf  
 * 
 * BSD license, all text above must be included in any redistribution
 ****************************************************/

// Variables used on this code
unsigned long time1;
unsigned long previousTime;
boolean enterFunction= true;
int led0 = 0;
int led1 = 1;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int led12 = 12;
int led13 = 13;
int counter = 0;
//-----------------------



void setup() {
 pinMode(led0, OUTPUT);
 pinMode(led1, OUTPUT);  
 pinMode(led2, OUTPUT);  
 pinMode(led3, OUTPUT);  
 pinMode(led4, OUTPUT);  
 pinMode(led5, OUTPUT);
 pinMode(led6, OUTPUT);
 pinMode(led7, OUTPUT);  
 pinMode(led8, OUTPUT);  
 pinMode(led9, OUTPUT);  
 pinMode(led10, OUTPUT);  
 pinMode(led11, OUTPUT);  
 pinMode(led12, OUTPUT);  
 pinMode(led13, OUTPUT); 
}

void loop() {
  time1 = micros();
  if (enterFunction == true){
    previousTime= time1;
    Serial.println(previousTime); // for debugging

    // Start your code below 
    //-----------------------

    

   switch (counter) {
    case 0:
      //do something when var equals 0
      digitalWrite(led5, LOW);
      digitalWrite(led0, HIGH);
      break;
    case 1:
      //do something when var equals 1
      digitalWrite(led0, LOW);
      digitalWrite(led1, HIGH);
      break;
    case 2:
      //do something when var equals 2
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      break;
    case 3:
      //do something when var equals 3
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
      break;
    case 4:
      //do something when var equals 4
      digitalWrite(led3, LOW);
      digitalWrite(led4, HIGH);
      break;
    case 5:
      //do something when var equals 5
      digitalWrite(led4, LOW);
      digitalWrite(led5, HIGH);
      break;
      case 6:
      //do something when var equals 5
      digitalWrite(led5, LOW);
      digitalWrite(led6, HIGH);
      break;
      case 7:
      //do something when var equals 5
      digitalWrite(led6, LOW);
      digitalWrite(led7, HIGH);
      break;
      case 8:
      //do something when var equals 5
      digitalWrite(led7, LOW);
      digitalWrite(led8, HIGH);
      break;
      case 9:
      //do something when var equals 5
      digitalWrite(led8, LOW);
      digitalWrite(led9, HIGH);
      break;
      case 10:
      //do something when var equals 5
      digitalWrite(led9, LOW);
      digitalWrite(led10, HIGH);
      break;
      case 11:
      //do something when var equals 5
      digitalWrite(led10, LOW);
      digitalWrite(led11, HIGH);
      break;
      case 12:
      //do something when var equals 5
      digitalWrite(led11, LOW);
      digitalWrite(led12, HIGH);
      break;
      case 13:
      //do something when var equals 5
      digitalWrite(led12, LOW);
      digitalWrite(led13, HIGH);
      break;
    default: 
      // if nothing else matches, do the default
      // default is optional
      digitalWrite(led13, LOW);
    break;
  }
  if (counter > 13){
    counter = 0;
  } else {
  counter++;
  }


    //-----------------------
    // End of your code
  }
  
  // The DELAY time is adjusted in the constant below >> 
  if (time1 - previousTime < 99990){ // 1 million microsencods= 1 second delay
    /* I have actually used 0.999990 seconds, in a trial to compensate the time that
       this IF function takes to be executed. this is really a point that
       need improvement in my code */   
    enterFunction= false;
  } 
  else {
    enterFunction= true;
  }





}
