int solenoidPin = 12;      // solenoid connected to digital pin 9
int val = 255;         // variable to store the read value //contracted
int val2 = 0;          //stretched
void setup() {
  pinMode(solenoidPin, OUTPUT);  // sets the pin as output
}

void loop() {
  String input = Serial.readString();

  if(input != "")
  {
    analogWrite(solenoidPin, val);
    delay(200);
    analogWrite(solenoidPin, val2);
  }
}
