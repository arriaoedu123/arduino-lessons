/*
# Creator: Aryon Rabello
# GitHub: https://github.com/arriaoedu123
# Creation date: 23/03/2022
# Version: 1.0
*/

float poten = A0;
float value;
float old_value = 0;
int adjusted_value;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  //read poten value, if that value is less or greater than old_value, then show the value on console
  value = analogRead(poten);
  
  if(value < old_value || value > old_value) {
  	Serial.print("Resistance: ");
    Serial.println(value);
    adjusted_value = map(value, 0.00, 1023, 0.00, 255);
    analogWrite(3, adjusted_value);
    Serial.print("Adjusted value: ");
    Serial.println(adjusted_value);
    Serial.print("Voltage: ");
    Serial.println(value * 5 / 1023);
    Serial.println("");
    old_value = value;
  }
}