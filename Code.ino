int spPin = 8;

void setup() {
  pinMode(spPin, OUTPUT);
}

void loop() {
  for (int i=0; i<1000; i++)
  {
    digitalWrite(spPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(spPin, LOW);
    delayMicroseconds(500);
   }
  delay(1000);
}
