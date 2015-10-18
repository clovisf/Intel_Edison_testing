/*************************************************** 
 * This code blinks 6 leds sequentially,
 * in order to test all of Intel Edison's analog ports (0 to 5).
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
int led0 = A0;
int led1 = A1;
int led2 = A2;
int led3 = A3;
int led4 = A4;
int led5 = A5;
int counter = 0;
//-----------------------



void setup() {
 pinMode(led0, OUTPUT);
 pinMode(led1, OUTPUT);  
 pinMode(led2, OUTPUT);  
 pinMode(led3, OUTPUT);  
 pinMode(led4, OUTPUT);  
 pinMode(led5, OUTPUT);
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
     
    default: 
      // if nothing else matches, do the default
      // default is optional
      digitalWrite(led5, LOW);
    break;
  }
  if (counter > 5){
    counter = 0;
  } else {
  counter++;
  }


    //-----------------------
    // End of your code
  }
  
  // The DELAY time is adjusted in the constant below >> 
  if (time1 - previousTime < 499990){ // 1 million microsencods= 1 second delay
    /* I have actually used 0.999990 seconds, in a trial to compensate the time that
       this IF function takes to be executed. this is really a point that
       need improvement in my code */   
    enterFunction= false;
  } 
  else {
    enterFunction= true;
  }





}
