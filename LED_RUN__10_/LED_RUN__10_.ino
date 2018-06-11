int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;
int h = 10;
int i = 11;
int j = 12;
int q = 30;

void setup()
{
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(h,OUTPUT);
  pinMode(i,OUTPUT);
  pinMode(j,OUTPUT);
  pinMode(14,INPUT);
}

void loop()
{
  
  for (int pin = 3; pin <= 12; pin++)
  {
  q = analogRead(14);
  q = q / 20;
  digitalWrite(pin,HIGH);
  delay(q);
  q = analogRead(14);
  q = q / 20;
  digitalWrite(pin,LOW);
  delay(q);
  }
  
    for (int pin =13; pin >= 3; pin--)
  {
  q = analogRead(14);
  q = q / 20;
  digitalWrite(pin,HIGH);
  delay(q);
  q = analogRead(14);
  q = q / 20;
  digitalWrite(pin,LOW);
  delay(q);
  }
  
  /*
  q = analogRead(14);
  digitalWrite(a,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(a,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(b,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(b,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(c,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(c,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(d,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(d,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(e,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(e,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(f,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(f,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(g,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(g,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(h,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(h,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(i,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(i,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(j,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(j,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(i,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(i,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(h,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(h,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(g,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(g,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(f,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(f,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(e,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(e,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(d,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(d,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(c,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(c,LOW);
  delay(q);
  q = analogRead(14);
  digitalWrite(b,HIGH);
  delay(q);
  q = analogRead(14);
  digitalWrite(b,LOW);
  delay(q);  
  q = analogRead(14);
  */
}
