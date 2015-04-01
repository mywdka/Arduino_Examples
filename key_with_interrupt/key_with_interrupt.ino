#define LED1        11
#define LED2        12
#define BUTTON      2
#define BUTTON_INT  0

#define DELAY       1000

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  attachInterrupt(BUTTON_INT, buttonChange, CHANGE);
}

void loop() {
  digitalWrite(LED1, HIGH);
  delay(DELAY);
  digitalWrite(LED1, LOW);
  delay(DELAY);
}

void buttonChange()
{
  int state = digitalRead(BUTTON);
  digitalWrite(LED2, !state);
}
