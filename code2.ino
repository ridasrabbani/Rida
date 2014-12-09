
/*
  Button
 
 Turns on and off a light emitting diode(LED) connected to digital  
 pin 13, when pressing a pushbutton attached to pin 2. 
 
 
 The circuit:
 * LED attached from pin 13 to ground 
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground
 
 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.
 
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 
 This example code is in the public domain.
 
 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin1 = 2;   
const int buttonPin2 = 3; 
const int buttonPin3 = 4; // the number of the pushbutton pin
const int ledPinblue =  10;   
const int ledPingreen =  9; 
const int ledPinred =  8; // the number of the LED pin

// variables will change:
int buttonState1 = 0;   
int buttonState2 = 0;
int buttonState3 = 0;

boolean b1On = false;
boolean b2On = false;
boolean b3On = false;


;// variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPinblue, OUTPUT);  
  pinMode(ledPingreen, OUTPUT);
  pinMode(ledPinred, OUTPUT); 
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);     
  pinMode(buttonPin2, INPUT); 
  pinMode(buttonPin3, INPUT); 
  Serial.begin(9600);
}

void loop(){
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  //if (buttonState1 == LOW) {     
  // turn LED on:    
  // digitalWrite(ledPin, HIGH);  
  //Serial.println('0');
  //} 

  //Serial.println(buttonState1);

  if (buttonState1 == HIGH && b1On == false) {
    digitalWrite(ledPinblue, HIGH);  
    Serial.println('1');
    b1On = true;
    delay(100);
  }
  else if (buttonState1 == LOW && b1On == true) {
    digitalWrite(ledPinblue, LOW);
    b1On = false;
    delay(100);
  }

  if (buttonState2 == LOW && b2On == false) {
    digitalWrite(ledPingreen, HIGH);  
    Serial.println('2');
    b2On = true;
    delay(100);
  }
  else if (buttonState2 == HIGH && b2On == true) {
    digitalWrite(ledPingreen, LOW);  
    b2On = false;
    delay(100);
  }

  if (buttonState3 == LOW && b3On == false) {
    digitalWrite(ledPinred, HIGH);  
    Serial.println('3');
    b3On = true;
    delay(100);
  }
  else if (buttonState3 == HIGH && b3On == true) {
    digitalWrite(ledPinred, LOW);
    b3On = false;
    delay(100);
  }
}


