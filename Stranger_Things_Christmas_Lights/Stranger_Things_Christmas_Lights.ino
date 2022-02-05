int relay = 13;

void setup() {
  // put your setup code here, to run once:

pinMode(relay,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(relay,LOW);
delay(193500);
digitalWrite(relay,HIGH);
delay(14000);
delay(178000);
}
