Const int lamp = 7
Void setup()
{
Serial.begin(9600);
pinMode(lamp, OUTPUT);
}
Void loop()
{
 Int c = analogRead(A0);
 Delay(500);
 If (c<300);
 {
 DigitalWrite(lamp, HIGH);
 Delay(1000);
 }
else
 {
 digitalWrite(lamp, LOW);
 delay(1000);
 }
}
