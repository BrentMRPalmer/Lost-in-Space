int Light = 12; //HERO board pin 12

void setup() {
  // initialize a digital pin as an output, then set its value to HIGH (5 volts)
  pinMode(Light, OUTPUT); // First argument is the pin number, the second sets the mode to OUTPUT
  digitalWrite(Light, HIGH); // First argument is the pin number, the second argument sets the voltage to high (5V)
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Light, LOW);
  delay(2000); // delay is used to pause before executing the next statement
  digitalWrite(Light, HIGH);
  delay(100); // the argument is the number of milliseconds to pause
}
