const int ledPin = 2; // the pin that the LED is attached to - change this if you have a separate LED connected to another pin
int incomingByte;      // a variable to read incoming serial data into
int ledPins[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13}; // LED pins
int ledCnt = 8;
void setup() {
  // initialize serial communication:
  Serial.begin(9600);
  for(int p=0; p<lenCnt; p++) {
      pinMode(ledPins[p], OUTPUT); // Set the mode to OUTPUT
}
 
void loop() {
  // see if there's incoming serial data:
  if (Serial.available() > 0) {
    // read the oldest byte in the serial buffer:
    incomingByte = Serial.read();
    // if it's a capital H (ASCII 72), turn on the LED:
    if (incomingByte == '1') {
      digitalWrite(1, HIGH);
    }
    // if it's an L (ASCII 76) turn off the LED:
    if (incomingByte == 'L') {
      digitalWrite(ledPins[p], LOW);
    }
  }
}
