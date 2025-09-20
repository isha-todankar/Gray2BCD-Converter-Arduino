//2-Bit GRAY to BCD Converter using Arduino (By: Isha Todankar)

// GRAY inputs on pins 2 and 3 
const int gray0 = 2;  //LSB of Gray code
const int gray1 = 3;  //MSB of Gray code

// BCD outputs on pins 8 and 9
const int bcd0 = 9; //LSB of BCD
const int bcd1 = 8; //MSB of BCD

void setup() 
{
  //Pin functions
  pinMode(gray0, INPUT);
  pinMode(gray1, INPUT);
  pinMode(bcd0, OUTPUT);
  pinMode(bcd1, OUTPUT);
}

void loop() {
  int g0 = digitalRead(gray0); //read G0 input
  int g1 = digitalRead(gray1); //read G1 input

  // Convert GRAY to Binary (2-bit case)
  int b1 = g1;          //MSB stays the same
  int b0 = g1 ^ g0;     //LSB = MSB XOR Gray LSB

  // Now output Binary as BCD
  digitalWrite(bcd0, b0);
  digitalWrite(bcd1, b1);
  delay(100); //delay
}
