#define LED1    11
#define LED2    12
#define BUTTON   2

#define DELAY  1000

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  int state;
  
  state = digitalRead(BUTTON);
  digitalWrite(LED2, !state);
  digitalWrite(LED1, HIGH);
  
  delay(DELAY);
  
  state = digitalRead(BUTTON);
  digitalWrite(LED2, !state);
  digitalWrite(LED1, LOW);
  
  delay(DELAY);
}
