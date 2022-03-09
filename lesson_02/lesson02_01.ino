/*
# Creator: Aryon Rabello
# GitHub: https://github.com/arriaoedu123
# Creation date: 09/03/2022
# Version: 1.0
*/

void setup() {
  pinMode(10, OUTPUT);
  pinMode(6, INPUT);
}

void loop() {
  //if the button is pressed then turn the led on
  if(digitalRead(6) == HIGH) {
    digitalWrite(10, HIGH);
  } else {
   	digitalWrite(10, LOW);
  }
}