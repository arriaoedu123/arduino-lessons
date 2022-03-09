/*
# Creator: Aryon Rabello
# GitHub: https://github.com/arriaoedu123
# Creation date: 09/03/2022
# Version: 1.0
*/

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  //if the button is pressed then make a flasher
  if(digitalRead(6) == HIGH) {
  	digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
    delay(500);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    delay(500);
    digitalWrite(10, LOW);
  } else {
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
}