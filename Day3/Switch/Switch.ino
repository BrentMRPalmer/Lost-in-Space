int LED = 12;
int Switch1 = 2; //pin 2 will be attached to our switch

void setup() {
  // setup both an output AND an input on the HERO
  pinMode(LED, OUTPUT); // set pin 12 to be an output
  pinMode(Switch1, INPUT); // set pin 2 to be an input

}

void loop() {
  // now within loop(), we'll take actions based on the status
  // of the input switch

  // this is a condition test
  if (digitalRead(Switch1) == HIGH){
    digitalWrite(LED, LOW); // turn LED OFF
    delay(1000);
    digitalWrite(LED, HIGH); // turn LED ON
    delay(100);
    digitalWrite(LED, LOW); // turn LED OFF
    delay(100);
    digitalWrite(LED, HIGH); // turn LED ON
    delay(100);
  } else {
    digitalWrite(LED, LOW); // turn LED OFF
  }
}
