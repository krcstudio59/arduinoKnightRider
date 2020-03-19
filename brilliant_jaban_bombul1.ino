int a;
int b;

int counter;

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for (a = 2; a<10; a++)
  {
    digitalWrite(a,HIGH);
    delay(100);
    digitalWrite(a,LOW);
  }
  for (a = 9; a>1; a--)
  {
    digitalWrite(a,HIGH);
    delay(100);
    digitalWrite(a,LOW);
  }
  b=9;
  for (a = 2; a<6; a++)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    delay(1000);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    b--;
  }
  b=6;
  for (a = 5; a>1; a--)
  {
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    delay(1000);
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    b++;
  }
  for (a = 2; a<10; a++)
  {
    int x = random(2,9);
    digitalWrite(x,HIGH);
    delay(1000);
    digitalWrite(x,LOW);
  }
}