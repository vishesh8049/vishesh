void setup() {
  pinMode(13,INPUT);
  pinMode(7,OUTPUT);

}

void loop() {
  if(6==HIGH){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }

}
