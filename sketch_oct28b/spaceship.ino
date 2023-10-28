int switch_state = 0;

//Initilize our pins set their functionality
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}


void loop() {
  //we are reading two states
  switch_state = digitalRead(2);

  if (switch_state == LOW)
  {
    digitalWrite(3, HIGH);// green LED (ON)
    digitalWrite(4, LOW); // red LED (OFF)
    digitalWrite(5, LOW); // red LED (OFF)
  }
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
  }
}
