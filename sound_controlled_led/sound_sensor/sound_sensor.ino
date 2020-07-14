int soundSensor = A2;
int LED = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(soundSensor, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int statusSensor = analogRead(soundSensor);

  if (statusSensor > 60)
  {
     analogWrite(LED, statusSensor*2.7);
//     delay(2);
  }

  else
  {
    digitalWrite(LED, LOW);
  }

}
