#define LED1    11
#define LED2    12
#define BUTTON  2

#define DELAY   1000

int ledState = LOW;
unsigned long previousMillis = 0;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  int buttonState;
  unsigned long currentMillis = millis();
 
  buttonState = digitalRead(BUTTON);
  digitalWrite(LED2, !buttonState);
 
  if(currentMillis - previousMillis >= DELAY) {
    
    previousMillis = currentMillis;   

    ledState = !ledState;

    digitalWrite(LED1, ledState);
  }
}

