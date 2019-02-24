int ledPin=13;
 void setup() {
pinMode(ledPin,OUTPUT);
}
void light(int duration)
{
  digitalWrite(ledPin,HIGH);
  delay(duration);
  digitalWrite(ledPin,LOW);
  delay(duration);
}
void loop() {
    light(150);
    light(150);
    light(150);
    //three dots
    delay(450);
    //letter space delay
    light(450);
    light(450);
    light(450);
    //three dashes
    delay(450);
    //letter space delay
    light(150);
    light(150);
    light(150);
    //three dots
    delay(1050);
    //word space delay
}
