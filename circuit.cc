// C++ code
int red = 13;
int yellow = 8;
int green = 2;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(red, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(green, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(green, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
  digitalWrite(yellow, HIGH);
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(yellow, LOW);
  delay(500); // Wait for 500 millisecond(s)
  
}
