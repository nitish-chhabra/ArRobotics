const int ledPins[] = {3,5,9,6};
void setup() {
  int index;
  for(index = 0; index < 4; index++)
    {
      pinMode(ledPins[index],OUTPUT);
    }
}

void loop() {
  int index;

  for (int brightness=1;brightness<=255;brightness++)
  {

    for(index = 0; index < 4; index++)
      {
        analogWrite(ledPins[index],brightness);
      }
    delay(2);
  }

  for (int brightness=255;brightness>0;brightness--)
  {

    for(index = 0; index < 4; index++)
      {
        analogWrite(ledPins[index],brightness);
      }
      delay(2);
  }

}

//void oneAfterAnotherNoLoop()
//{
//
//  int delayTime = 1000;
//  int i=0;
//
//  for(i=0;i<2;i++)
//  {
//    digitalWrite(ledPins[i], HIGH);
//  }
//  
//  for(i=2;i<4;i++)
//  {
//    digitalWrite(ledPins[i], LOW);
//  }
//  delay(delayTime);
//
//  
//  for(i=2;i<4;i++)
//  {
//    digitalWrite(ledPins[i], HIGH);
//  }
//  
//  for(i=0;i<2;i++)
//  {
//    digitalWrite(ledPins[i], LOW);
//  }
//  delay(delayTime);
//
//}
