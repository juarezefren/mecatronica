
#define myled D4

void setup() {

  pinMode(myled, OUTPUT);
}


void loop() {
  digitalWrite(myled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(myled, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
