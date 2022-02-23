/*
# Creator: Aryon Rabello
# GitHub: https://github.com/arriaoedu123
# Creation date: 23/02/2022
# Version: 1.0
*/

void setup() {
  pinMode (8, OUTPUT);
  pinMode (2, OUTPUT);
}

void loop() {
  // turn the led on when the other led is off //
  
  digitalWrite (8, HIGH);
  delay (500);
  digitalWrite (8, LOW);
  digitalWrite (2, HIGH);
  delay (500);
  digitalWrite (2, LOW);
}