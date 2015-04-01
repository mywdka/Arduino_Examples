#include <TimerOne.h>

#define LED1    11
#define LED2    12
#define BUTTON  2

#define DELAY  1000000 /* in us ! */

void setup(void)
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON, INPUT);
  
  Timer1.initialize(DELAY);
  Timer1.attachInterrupt(blinkLED); // blinkLED to run every 1 seconds
}


int ledState = LOW;

void blinkLED(void)
{
  ledState = !ledState;
  digitalWrite(LED1, ledState);
}

void loop(void)
{
  int state = digitalRead(BUTTON);
  digitalWrite(LED2, !state);
}
