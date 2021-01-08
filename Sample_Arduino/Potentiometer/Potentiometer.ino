
int potValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(A5);
  Serial.println(potValue);
  delay(2000);
}
