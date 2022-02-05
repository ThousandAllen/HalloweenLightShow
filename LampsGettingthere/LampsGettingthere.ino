//Use This One
void setup() {
  // put your setup code here, to run once:
  delay(1000);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Rest at start
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
delay(2000);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
delay(52200);

//Should I stay or Should I go
for(int i=0; i<2; i++) {
digitalWrite(8,HIGH);
delay(800);
digitalWrite(8,LOW);

digitalWrite(12,HIGH);
delay(900);
digitalWrite(12,LOW); 

digitalWrite(11,HIGH);
delay(400);
digitalWrite(11,LOW); 
delay(2400);
}

//Should I stay or Should I go
for(int i=0; i<4; i++) {
digitalWrite(8,HIGH);
delay(800);
digitalWrite(8,LOW);

digitalWrite(12,HIGH);
delay(900);
digitalWrite(12,LOW); 

digitalWrite(11,HIGH);
delay(400);
digitalWrite(11,LOW); 
delay(2000);
}

for(int i=0; i<2; i++) {
digitalWrite(8,HIGH);
delay(800);
digitalWrite(8,LOW);

digitalWrite(12,HIGH);
delay(900);
digitalWrite(12,LOW); 

digitalWrite(11,HIGH);
delay(400);
digitalWrite(11,LOW); 
delay(2400);
}

delay(200);

digitalWrite(8,HIGH);
delay(800);
digitalWrite(8,LOW);

digitalWrite(12,HIGH);
delay(900);
digitalWrite(12,LOW); 

digitalWrite(11,HIGH);
delay(400);
digitalWrite(11,LOW); 
delay(2200);


digitalWrite(8,HIGH);
delay(800);
digitalWrite(8,LOW);

digitalWrite(12,HIGH);
delay(900);
digitalWrite(12,LOW); 

digitalWrite(11,HIGH);
delay(400);
digitalWrite(11,LOW); 
delay(2400);



//Just loop through lamps to waste time until song ends
for (int t=0; t<5; t++) {
 digitalWrite(8,HIGH);
 delay(1000);
 digitalWrite(8,LOW);
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
delay(1000);
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(12,LOW);

}
for (int t=0; t<2; t++) {
 digitalWrite(8,HIGH);
 delay(1000);
digitalWrite(9,HIGH);
delay(1000);
digitalWrite(10,HIGH);
delay(1000);

digitalWrite(11,HIGH);
delay(1000);

digitalWrite(12,HIGH);
delay(1000);
digitalWrite(12,LOW);
delay(1000);
digitalWrite(11,LOW);
delay(1000);
digitalWrite(10,LOW);
delay(1000);

digitalWrite(9,LOW);
delay(1000);

digitalWrite(8,LOW);
delay(1000);
}


// Right Here and RUN on wall
delay(45300);
//Monster, lights go crazy
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
delay(4400);
//Upside down - all lights blue or off
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
delay(14500);
delay(177550);
}
