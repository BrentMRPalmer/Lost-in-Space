
int LED0 = 6;
int LED1 = 7;
int LED2 = 8;
int LED3 = 9;
int LED4 = 10;
int LED5 = 11;
int LED6 = 12;
int LED7 = 13;

int Switch1 = 2;
int Switch2 = 3;
int Switch3 = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  // pinMode(LED3, OUTPUT);
  pinMode(Switch1, INPUT);
  pinMode(Switch2, INPUT);
  pinMode(Switch3, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // LED0
  if (digitalRead(Switch1) == LOW && digitalRead(Switch2) == LOW && digitalRead(Switch3) == LOW ) {
    digitalWrite(LED0, HIGH); //turn LED ON
  } else {
    digitalWrite(LED0, LOW); //turn LED OFF
  }

  // LED1
  if (digitalRead(Switch1) == LOW && digitalRead(Switch2) == LOW && digitalRead(Switch3) == HIGH ) {
    digitalWrite(LED1, HIGH); //turn LED ON
  } else {
    digitalWrite(LED1, LOW); //turn LED OFF
  }

  // LED2
  if (digitalRead(Switch1) == LOW && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == LOW ) {
    digitalWrite(LED2, HIGH); //turn LED ON
  } else {
    digitalWrite(LED2, LOW); //turn LED OFF
  }

  // LED3
  if (digitalRead(Switch1) == LOW && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == HIGH ) {
    digitalWrite(LED3, HIGH); //turn LED ON
  } else {
    digitalWrite(LED3, LOW); //turn LED OFF
  }

  // LED4
  if (digitalRead(Switch1) == HIGH && digitalRead(Switch2) == LOW && digitalRead(Switch3) == LOW ) {
    digitalWrite(LED4, HIGH); //turn LED ON
  } else {
    digitalWrite(LED4, LOW); //turn LED OFF
  }

  // LED5
  if (digitalRead(Switch1) == HIGH && digitalRead(Switch2) == LOW && digitalRead(Switch3) == HIGH ) {
    digitalWrite(LED5, HIGH); //turn LED ON
  } else {
    digitalWrite(LED5, LOW); //turn LED OFF
  }

  // LED6
  if (digitalRead(Switch1) == HIGH && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == LOW ) {
    digitalWrite(LED6, HIGH); //turn LED ON
  } else {
    digitalWrite(LED6, LOW); //turn LED OFF
  }

  // LED7
  if (digitalRead(Switch1) == HIGH && digitalRead(Switch2) == HIGH && digitalRead(Switch3) == HIGH ) {
    digitalWrite(LED7, HIGH); //turn LED ON
  } else {
    digitalWrite(LED7, LOW); //turn LED OFF
  }

}
