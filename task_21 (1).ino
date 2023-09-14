int reading = 0;

void setup()
{
 pinMode(9 , OUTPUT);
}

void loop()
{
  analogWrite(9 , 1);
  delay(250);
 analogWrite(9 , 4);
  delay(250);
 analogWrite(9 , 7);
  delay(250);
 analogWrite(9 , 4);
  delay(250);
 analogWrite(9 , 1);
  delay(250);
}