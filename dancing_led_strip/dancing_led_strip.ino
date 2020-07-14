const int ledPins = 9;
int fadeSpeed = 1;
int data;
char junk;
String inputString = "";

void setup() {
  Serial.begin(9600);
  pinMode(ledPins , OUTPUT);

}

void TurnOn() {
  int Bright = 0;

  for (int i = 0; i < 256; i++) {
    analogWrite(ledPins, Bright);
    Bright += 1;
    delay(fadeSpeed);
  }

}

void TurnOff() {
  int brightness = 255;

  for (int i = 0; i < 256; i++) {
    analogWrite(ledPins, brightness);
    brightness -= 1;
    delay(fadeSpeed);
  }
}

void loop() {

  if (Serial.available())
  {
    while (Serial.available())
    {
      char inChar = (char)Serial.read();
      inputString += inChar;
    }
    Serial.println(inputString);

    while (Serial.available() > 0)
    {
      junk = Serial.read();
    }

    if (inputString == "a")
    {
      TurnOn(); delay(500);
    }
    else if (inputString == "b")
    {
      TurnOff(); delay(500);
    }
    inputString = "";
  }
  delay(50);
}
