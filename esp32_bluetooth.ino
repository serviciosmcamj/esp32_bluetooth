#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

int lightbulb = 13;
int lightbulb1 = 12;
int lightbulb2 = 14;
int lightbulb3 = 27;
int lightbulb4 = 26;
int lightbulb5 = 25;
int lightbulb6 = 33;
int lightbulb7 = 32;
int lightbulb8 = 15;
int lightbulb9 = 2;
int lightbulb10 = 4;
int lightbulb11 = 16;
int lightbulb12 = 17;
int lightbulb13 = 5;
int lightbulb14 = 18;
int lightbulb15 = 19;
int lightbulb16 = 21;
int lightbulb17 = 3;
int lightbulb18 = 22;
int lightbulb19 = 23;

void setup() {
  SerialBT.begin("DIOS");
  Serial.begin(115200);
  pinMode(lightbulb,OUTPUT);
  digitalWrite(lightbulb,HIGH);
  pinMode(lightbulb1,OUTPUT);
  digitalWrite(lightbulb1,HIGH);
  pinMode(lightbulb2,OUTPUT);
  digitalWrite(lightbulb2,HIGH);
  pinMode(lightbulb3,OUTPUT);
  digitalWrite(lightbulb3,HIGH);
  pinMode(lightbulb4,OUTPUT);
  digitalWrite(lightbulb4,HIGH);
  pinMode(lightbulb5,OUTPUT);
  digitalWrite(lightbulb5,HIGH);
  pinMode(lightbulb6,OUTPUT);
  digitalWrite(lightbulb6,HIGH);
  pinMode(lightbulb7,OUTPUT);
  digitalWrite(lightbulb7,HIGH);
  pinMode(lightbulb8,OUTPUT);
  digitalWrite(lightbulb8,HIGH);
  pinMode(lightbulb9,OUTPUT);
  digitalWrite(lightbulb9,HIGH);
  pinMode(lightbulb10,OUTPUT);
  digitalWrite(lightbulb10,HIGH);
  pinMode(lightbulb11,OUTPUT);
  digitalWrite(lightbulb11,HIGH);
  pinMode(lightbulb12,OUTPUT);
  digitalWrite(lightbulb12,HIGH);
  pinMode(lightbulb13,OUTPUT);
  digitalWrite(lightbulb13,HIGH);
  pinMode(lightbulb14,OUTPUT);
  digitalWrite(lightbulb14,HIGH);
  pinMode(lightbulb15,OUTPUT);
  digitalWrite(lightbulb15,HIGH);
  pinMode(lightbulb16,OUTPUT);
  digitalWrite(lightbulb16,HIGH);
  pinMode(lightbulb17,OUTPUT);
  digitalWrite(lightbulb17,HIGH);
  pinMode(lightbulb18,OUTPUT);
  digitalWrite(lightbulb18,HIGH);
  pinMode(lightbulb19,OUTPUT);
  digitalWrite(lightbulb19,HIGH);
}

void loop() 
{   
/* ESP32 bluetooth detects whether the user is inputting via. terminal; whatever content typed will output
onto the computer's serial monitor (if connected to a computer running Arduino IDE or equivalent) */
  
  if (SerialBT.available()) { //Check if there is any input from smartphone/tablet (i.e. bluetooth serial device)
    int x = SerialBT.read(); //store whatever is read from the bluetooth serial device into variable 'x'
    Serial.write(x); //output variable 'x' on serial monitor

/* Using a Terminal-enabled app on Android (paired and connected to ESP32/ESP32S via. Bluetooth Classic), 
user inputs different characters corresponding with different light functions, e.g. inputting '1' and '0' 
via. Terminal on Android device turns the light on and off respectively. */
   
    if (char(x) == 'A') {
      digitalWrite(lightbulb,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'a') { 
      digitalWrite(lightbulb,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'R') {
      digitalWrite(lightbulb1,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'r') { 
      digitalWrite(lightbulb1,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'B') {
      digitalWrite(lightbulb2,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'b') { 
      digitalWrite(lightbulb2,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'S') {
      digitalWrite(lightbulb3,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 's') { 
      digitalWrite(lightbulb3,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'C') {
      digitalWrite(lightbulb4,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'c') { 
      digitalWrite(lightbulb4,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'T') {
      digitalWrite(lightbulb5,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 't') { 
      digitalWrite(lightbulb5,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'D') {
      digitalWrite(lightbulb6,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'd') { 
      digitalWrite(lightbulb6,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'U') {
      digitalWrite(lightbulb7,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'u') { 
      digitalWrite(lightbulb7,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'E') {
      digitalWrite(lightbulb8,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'e') { 
      digitalWrite(lightbulb8,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'V') {
      digitalWrite(lightbulb9,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'v') { 
      digitalWrite(lightbulb9,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'F') {
      digitalWrite(lightbulb10,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'f') { 
      digitalWrite(lightbulb10,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'W') {
      digitalWrite(lightbulb11,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'w') { 
      digitalWrite(lightbulb11,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'G') {
      digitalWrite(lightbulb12,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'g') { 
      digitalWrite(lightbulb12,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'X') {
      digitalWrite(lightbulb13,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'x') { 
      digitalWrite(lightbulb13,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'H') {
      digitalWrite(lightbulb14,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'h') { 
      digitalWrite(lightbulb14,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'Y') {
      digitalWrite(lightbulb15,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'y') { 
      digitalWrite(lightbulb15,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'I') {
      digitalWrite(lightbulb16,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'i') { 
      digitalWrite(lightbulb16,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'Z') {
      digitalWrite(lightbulb17,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'z') { 
      digitalWrite(lightbulb17,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == '0') {
      digitalWrite(lightbulb18,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == '1') { 
      digitalWrite(lightbulb18,HIGH);
      SerialBT.print("Light ON\n");
    }
    if (char(x) == 'K') {
      digitalWrite(lightbulb19,LOW);
      SerialBT.print("Light OFF\n");
    }   
    
    if (char(x) == 'k') { 
      digitalWrite(lightbulb19,HIGH);
      SerialBT.print("Light ON\n");
    }
    
    
}

}
