/*
# Creator: Aryon Rabello
# GitHub: https://github.com/arriaoedu123
# Creation date: 23/02/2022
# Version: 1.0
*/

void setup() {
  pinMode (8, OUTPUT);
}

void loop() {
  // morse code saying hi in portuguese //
  
  // letter "O" //
  digitalWrite (8, HIGH);
  delay(500);
  digitalWrite (8, LOW);
  delay(500);
  digitalWrite (8, HIGH);
  delay(500);
  digitalWrite (8, LOW);
  delay(500);
  digitalWrite (8, HIGH);
  delay(500);
  digitalWrite (8, LOW);
  delay(500);
  
  // letter "I" //
  digitalWrite (8, HIGH);
  delay(250);
  digitalWrite (8, LOW);
  delay(250);
  digitalWrite (8, HIGH);
  delay(250);
  digitalWrite (8, LOW);
  delay(1000);
}