#define LED1 8
#define LED2 9

void setup() {
 pinMode(LED1,OUTPUT);
 pinMode(LED2,OUTPUT);
}

void loop() {
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(1700);
  digitalWrite(LED2,LOW);
  delay(100);
}
