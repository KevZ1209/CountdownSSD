// Define the pin numbers
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinH = 13;
int D1 = 9;
int D2 = 10;
int D3 = 11;
int D4 = 12;
const unsigned long REFRESH_VAL = 7;

// Setup routine
void setup() {
  // Initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinH, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT);

  // start countdown
  digitalWrite(D1,LOW); 
  digitalWrite(D2,HIGH); 
  digitalWrite(D3,HIGH); 
  digitalWrite(D4,HIGH);

  display4();
  

  delay(1000);

  // start countdown
  digitalWrite(D1,HIGH); 
  digitalWrite(D2,LOW); 
  digitalWrite(D3,HIGH); 
  digitalWrite(D4,HIGH);
  
  display3();

  delay(1000);

  digitalWrite(D1,HIGH); 
  digitalWrite(D2,HIGH); 
  digitalWrite(D3,LOW); 
  digitalWrite(D4,HIGH);
  display2();
  
  delay(1000);

  digitalWrite(D1,HIGH); 
  digitalWrite(D2,HIGH); 
  digitalWrite(D3,HIGH); 
  digitalWrite(D4,LOW);
  display1();
  
  delay(1000);
  

}



void displaydec() {
  digitalWrite(pinH, HIGH);
}

void removedec() {
  digitalWrite(pinH, LOW);
}

void display0() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, LOW);
  
}

// functions
void display1() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void display2() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, LOW);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);  
}

void display3() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, HIGH);  
}

void display4() {
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void display5() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void display6() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);
}

void display7() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, LOW);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, LOW);
  digitalWrite(pinG, LOW);
}

void display8() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, HIGH);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);  
}

void display9() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, HIGH);
  digitalWrite(pinC, HIGH);
  digitalWrite(pinD, HIGH);
  digitalWrite(pinE, LOW);
  digitalWrite(pinF, HIGH);
  digitalWrite(pinG, HIGH);  
}

unsigned long t = millis();

void loop() {
  
// Declare four variables to store the digits of the number
int d1 =0;
int d2 =0;
int d3 =0;
int d4 =0;

// Use a for loop to count from zero to nine thousand nine hundred ninety nine
int i = 0;
while (i <= 9999) {


// Use modulo and division operations to extract the digits of the number
d1 = i %10; // The ones digit
d2 = (i/10) %10; // The tens digit
d3 = (i/100) %10; // The hundreds digit
d4 = (i/1000) %10; // The thousands digit

// Display the digits on the four segments

// Turn on the first segment and display the ones digit
digitalWrite(D1, HIGH); 
digitalWrite(D2,HIGH); 
digitalWrite(D3,HIGH); 
digitalWrite(D4,LOW);

switch(d1) { // Use a switch case to call the appropriate function for each digit
case(0): display0(); break;
case(1): display1(); break;
case(2): display2(); break;
case(3): display3(); break;
case(4): display4(); break;
case(5): display5(); break;
case(6): display6(); break;
case(7): display7(); break;
case(8): display8(); break;
case(9): display9(); break;  
}
delay(REFRESH_VAL); // Add a small delay

if (millis() - t >= 100) {
  i++;
  t = millis();
}

// Turn on the second segment and display the tens digit
digitalWrite(D1,HIGH); 
digitalWrite(D2,HIGH); 
digitalWrite(D3,LOW); 
digitalWrite(D4,HIGH);
displaydec();

switch(d2) { // Use a switch case to call the appropriate function for each digit
case(0): display0(); break;
case(1): display1(); break;
case(2): display2(); break;
case(3): display3(); break;
case(4): display4(); break;
case(5): display5(); break;
case(6): display6(); break;
case(7): display7(); break;
case(8): display8(); break;
case(9): display9(); break;  
}
delay(REFRESH_VAL); // Add a small delay

if (millis() - t >= 100) {
  i++;
  t = millis();
}

// Turn on the third segment and display the hundreds digit
digitalWrite(D1,HIGH); 
digitalWrite(D2,LOW); 
digitalWrite(D3,HIGH); 
digitalWrite(D4,HIGH);
removedec();

switch(d3) { // Use a switch case to call the appropriate function for each digit
case(0): display0(); break;
case(1): display1(); break;
case(2): display2(); break;
case(3): display3(); break;
case(4): display4(); break;
case(5): display5(); break;
case(6): display6(); break;
case(7): display7(); break;
case(8): display8(); break;
case(9): display9(); break;  
}
delay(REFRESH_VAL); // Add a small delay

if (millis() - t >= 100) {
  i++;
  t = millis();
}

// Turn on the fourth segment and display the thousands digit
digitalWrite(D1,LOW); 
digitalWrite(D2,HIGH); 
digitalWrite(D3,HIGH); 
digitalWrite(D4,HIGH);

switch(d4) { // Use a switch case to call the appropriate function for each digit
case(0): display0(); break;
case(1): display1(); break;
case(2): display2(); break;
case(3): display3(); break;
case(4): display4(); break;
case(5): display5(); break;
case(6): display6(); break;
case(7): display7(); break;
case(8): display8(); break;
case(9): display9(); break;  
}
delay(REFRESH_VAL); // Add a small delay

if (millis() - t >= 100) {
  i++;
  t = millis();
}

}

}
