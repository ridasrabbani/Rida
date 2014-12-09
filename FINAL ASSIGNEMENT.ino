
// These are YOUR button pushes:
int YourHold1=0;
int YourHold2=0;
int YourHold3=0;
int YourHold4=0;
int YourHold5=0;
int YourHold6=0;

// These are MY button pushes:
int MyHold1=0;
int MyHold2=0;
int MyHold3=0;
int MyHold4=0;
int MyHold5=0;
int MyHold6=0;

// These are the button pins:
const int buttonPin1 =2;
const int buttonPin2=3;
const int buttonPin3=4;

// These are the LED pins:
int ledPin[] = {
  0, 8, 9, 7};
const int loser=13;

// This is the message we get from the other Arduino:
int incomingByte;

// This is true once YOU are done pushing buttons:
boolean yourTurnIsOver = false;

// Then this is true once I am done pushing buttons:
boolean myTurnIsOver = false;


void setup()
{
  // Initialize serial communication:
  Serial.begin(9600);

  // Set up LED pins:
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(loser, OUTPUT);

  // Set up button pins:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
}


void loop()
{
  //int test = digitalRead(buttonPin3);
  //if (test > 0)
  {
    //Serial.println("PUSHED");
  }  

  Serial.println(digitalRead(buttonPin3));

  // See if there's incoming serial data:
  if (Serial.available() > 0)
  {
    // Read the oldest byte in the serial buffer:
    incomingByte = Serial.read();

    // Adjust for ASCII values:
    incomingByte = incomingByte - 48;

    // Print the numbers we're receiving:
    //Serial.println(incomingByte);


    // **** PART 1: Receive and store YOUR button pushes in YourHold1 - YourHold6 **** //

    // Run this code only if neither of us have pushed buttons yet:
    if (yourTurnIsOver == false && myTurnIsOver == false)
    {    
      // Run this code only if one of YOUR buttons has been pressed:
      if (incomingByte > 0)
      {
        if (YourHold1==0)
        {
          YourHold1=incomingByte;

          digitalWrite(ledPin[YourHold1], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold1], LOW);

          delay(1000);
          Serial.print("YourHold1 = ");
          Serial.println(YourHold1);
        }
        else if(YourHold2==0)
        {
          YourHold2=incomingByte;

          digitalWrite(ledPin[YourHold2], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold2], LOW);

          delay(1000);
          Serial.print("YourHold2 = ");
          Serial.println(YourHold2);
        }
        else if(YourHold3==0)
        {
          YourHold3=incomingByte;

          digitalWrite(ledPin[YourHold3], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold3], LOW);

          delay(1000);
          Serial.print("YourHold3 = ");
          Serial.println(YourHold3);
        }
        else if(YourHold4==0)
        {
          YourHold4=incomingByte;

          digitalWrite(ledPin[YourHold4], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold4], LOW);

          delay(1000);
          Serial.print("YourHold4 = ");
          Serial.println(YourHold4);
        }
        else if(YourHold5==0)
        {
          YourHold5=incomingByte;

          digitalWrite(ledPin[YourHold5], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold5], LOW);

          delay(1000);
          Serial.print("YourHold5 = ");
          Serial.println(YourHold5);
        }
        else if(YourHold6==0)
        {
          YourHold6=incomingByte;

          digitalWrite(ledPin[YourHold6], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold6], LOW);

          delay(1000);
          Serial.print("YourHold6 = ");
          Serial.println(YourHold6);

          // YOUR turn is over:
          yourTurnIsOver = true;


          // Blink the LEDs that YOU pressed:

          digitalWrite(ledPin[YourHold1], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold1], LOW);
          delay(300);

          digitalWrite(ledPin[YourHold2], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold2], LOW);
          delay(300);

          digitalWrite(ledPin[YourHold3], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold3], LOW);
          delay(300);

          digitalWrite(ledPin[YourHold4], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold4], LOW);
          delay(300);

          digitalWrite(ledPin[YourHold5], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold5], LOW);
          delay(300);

          digitalWrite(ledPin[YourHold6], HIGH);
          delay(700);
          digitalWrite(ledPin[YourHold6], LOW);
          delay(300);
        }
      }
    }
  }

  // **** END OF PART 1 **** ///


  // **** PART 2: Receive and store MY button pushes in MyHold1 - MyHold6 **** //

  // Run this code only if YOU are done pushing buttons:
  if (yourTurnIsOver == true && myTurnIsOver == false)
  {
    if (MyHold1==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold1=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold1=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold1=3;
        delay(500);
      }
      if (MyHold1 > 0)
      {
        Serial.print("MyHold1 = ");
        Serial.println(MyHold1);

        digitalWrite(ledPin[MyHold1], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold1], LOW);
      }
    }
    else if (MyHold2==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold2=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold2=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold2=3;
        delay(500);
      }
      if (MyHold2 > 0)
      {
        Serial.print("MyHold2 = ");
        Serial.println(MyHold2);

        digitalWrite(ledPin[MyHold2], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold2], LOW);
      }
    }
    else if (MyHold3==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold3=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold3=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold3=3;
        delay(500);
      }
      if (MyHold3 > 0)
      {
        Serial.print("MyHold3 = ");
        Serial.println(MyHold3);

        digitalWrite(ledPin[MyHold3], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold3], LOW);
      }
    }
    else if (MyHold4==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold4=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold4=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold4=3;
        delay(500);
      }
      if (MyHold4 > 0)
      {
        Serial.print("MyHold4 = ");
        Serial.println(MyHold4);

        digitalWrite(ledPin[MyHold4], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold4], LOW);
      }
    }

    else if (MyHold5==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold5=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold5=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold5=3;
        delay(500);
      }
      if (MyHold5 > 0)
      {
        Serial.print("MyHold5 = ");
        Serial.println(MyHold5);

        digitalWrite(ledPin[MyHold5], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold5], LOW);
      }
    }

    else if (MyHold6==0)
    {
      if (digitalRead(buttonPin1)==1)
      {
        MyHold6=1;
        delay(500);
      }
      if (digitalRead(buttonPin2)==1)
      {
        MyHold6=2;
        delay(500);
      }
      if (digitalRead(buttonPin3)==1)
      {
        MyHold6=3;
        delay(500);
      }
      if (MyHold6 > 0)
      {
        Serial.print("MyHold6 = ");
        Serial.println(MyHold6);

        digitalWrite(ledPin[MyHold6], HIGH);
        delay(700);
        digitalWrite(ledPin[MyHold6], LOW);

        // MY turn is over:
        myTurnIsOver = true;
      }
    }
  }

  // **** END OF PART 2 **** //


  // **** PART 3: Check if YOU and ME pushed the same buttons **** //

  // Run this code only if we're BOTH done pushing buttons:
  if (yourTurnIsOver == true && myTurnIsOver == true)
  {
    Serial.println("PART 3 STARTS");
    if(YourHold1==MyHold1)
    {
      if (YourHold2==MyHold2)
      {
        if (YourHold3==MyHold3)
        {
          if (YourHold4==MyHold4)
          {
            if(YourHold5==MyHold5)
            {
              if(YourHold6==MyHold6)
              {
                // WINNER!
                Serial.println("YOU WIN!");

                digitalWrite(ledPin[YourHold1], HIGH);
                digitalWrite(ledPin[YourHold2], HIGH);
                digitalWrite(ledPin[YourHold3], HIGH);
                delay(700);
                digitalWrite(ledPin[YourHold1], LOW);
                digitalWrite(ledPin[YourHold2], LOW);
                digitalWrite(ledPin[YourHold3], LOW);
                delay(700);
                digitalWrite(ledPin[YourHold1], HIGH);
                digitalWrite(ledPin[YourHold2], HIGH);
                digitalWrite(ledPin[YourHold3], HIGH);
                delay(700);
                digitalWrite(ledPin[YourHold1], LOW);
                digitalWrite(ledPin[YourHold2], LOW);
                digitalWrite(ledPin[YourHold3], LOW);
                delay(700);
                digitalWrite(ledPin[YourHold1], HIGH);
                digitalWrite(ledPin[YourHold2], HIGH);
                digitalWrite(ledPin[YourHold3], HIGH);
                delay(700);
                digitalWrite(ledPin[YourHold1], LOW);
                digitalWrite(ledPin[YourHold2], LOW);
                digitalWrite(ledPin[YourHold3], LOW);
              }
              else
              {
                // LOSER!
                Serial.println("YOU LOSE!");
                // buzzer
                digitalWrite(loser, HIGH);
                delay(1000);
                digitalWrite(loser, LOW);
              }
            }
            else
            {
              // LOSER!
              Serial.println("YOU LOSE!");
              // buzzer
              digitalWrite(loser, HIGH);
              delay(1000);
              digitalWrite(loser, LOW);
            }
          }
          else
          {
            // LOSER!
            Serial.println("YOU LOSE!");
            // buzzer
            digitalWrite(loser, HIGH);
            delay(1000);
            digitalWrite(loser, LOW);
          }
        }
        else
        {
          // LOSER!
          Serial.println("YOU LOSE!");
          // buzzer
          digitalWrite(loser, HIGH);
          delay(1000);
          digitalWrite(loser, LOW);
        }
      }
      else
      {
        // LOSER!
        Serial.println("YOU LOSE!");
        // buzzer
        digitalWrite(loser, HIGH);
        delay(1000);
        digitalWrite(loser, LOW);
      }
    }
    else
    {
      // LOSER
      Serial.println("YOU LOSE!");
      // buzzer
      digitalWrite(loser, HIGH);
      delay(1000);
      digitalWrite(loser, LOW);
    }

    // RESET:
    YourHold1 = 0;
    YourHold2 = 0;
    // etc../
    MyHold1 = 0;
    MyHold2 = 0;
    // etc...
    yourTurnIsOver = false;
    myTurnIsOver = false;
  }

  //Serial.println("THE END");

  // **** END OF PART 3 **** //

}










