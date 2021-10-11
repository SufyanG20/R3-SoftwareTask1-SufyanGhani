// C++ code
//
/*
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
*/

int A = 2; // Decoder1 Input 1 Pin
int B = 5; // Decoder1 Input 2 Pin
int C = 4; // Decoder1 Input 3 Pin
int D = 3; // Decoder1 Input 4 Pin

int E = 2; // Decoder2 Input 1 Pin
int F = 5; // Decoder2 Input 2 Pin
int G = 4; // Decoder2 Input 3 Pin
int H = 3; // Decoder2 Input 4 Pin

int potValue = 0; // Potentiometer Value
float volts = 0; // Volts read from potentiometer

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(H, OUTPUT);
}

void loop()
{
  // Reading the value from the potentiometer
  potValue = analogRead(A0); 
  // Mapping all the values of the potentiometer from 0 to 99
  volts = map(potValue, 0, 1023, 0, 99);
  
  //Displaying number 0 on display1
  if (volts >= 45 && volts < 50)
  {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  }
  //Displaying number 1 on display1
  else if (volts >= 40 && volts < 45) 
  { 
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  }
  //Displaying number 2 on display1
  else if (volts >= 35 && volts < 40) 
  {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  }
  //Displaying number 3 on display1
  else if (volts >= 30 && volts < 35) 
  {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  }
  //Displaying number 4 on display1
  else if (volts >= 25 && volts < 30) 
  {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
  }
  //Displaying number 5 on display1
  else if (volts >= 20 && volts < 25) 
  {
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
  }
  //Displaying number 6 on display1
  else if (volts >= 15 && volts < 20)
  {
    digitalWrite(A, LOW);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
  }
  //Displaying number 7 on display1
  else if (volts >= 10 && volts < 15) 
  {
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, LOW);
  }
  //Displaying number 8 on display1
  else if (volts >= 5 && volts < 10) 
  {
    digitalWrite(A, LOW);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
  }
  //Displaying number 9 on display1
  else if (volts < 5) 
  {
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, HIGH);
  }
}