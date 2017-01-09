#define RED 3
#define GREEN 5
#define BLUE 6

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(GREEN, 55);
  analogWrite(RED, 100);
  analogWrite(BLUE, 50);

  delay(10);

}
