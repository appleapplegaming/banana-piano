const int ledPin = 2;  // pin for the "L" LED on the Arduino Mega
const int touchPin = A0;  // pin for the touch sensor
const int ledPin2 = 3;  // pin for the "L" LED on the Arduino Mega
const int touchPin2 = A1;  // pin for the touch sensor
const int ledPin3 = 4;  // pin for the "L" LED on the Arduino Mega
const int touchPin3 = A2;  // pin for the touch sensor
const int ledPin4 = 5;  // pin for the "L" LED on the Arduino Mega
const int touchPin4 = A3;  // pin for the touch sensor
const int ledPin5 = 6;  // pin for the "L" LED on the Arduino Mega
const int touchPin5 = A4;  // pin for the touch sensor
const int threshold = 400;  // threshold value to detect touch2

void setup() {
  pinMode(ledPin, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin2, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin2, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin3, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin3, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin4, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin4, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin5, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin5, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin5, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin5, INPUT);  // set the touch sensor pin as an input` 
  Serial.begin(9600);
}
bool debouncing = false;  // variable to keep track of debouncing state
bool debouncing2 = false;  // variable to keep track of debouncing state
bool one = false;
bool two = false;
void loop() {
  int touchValue = analogRead(touchPin);  // read the value from the touch sensor
  int touchValue2 = analogRead(touchPin2);  // read the value from the touch sensor

  //note1
  if (touchValue < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin, HIGH);  // turn on the "L" LED
    one = true;
      Serial.println(touchValue);
  } else {
    digitalWrite(ledPin, LOW);  // turn off the "L" LED
  }

  if (one == true) {
    Serial.println("one");
    one = false;
    delay(300);
  }
  //note 2
    if (touchValue2 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin2, HIGH);  // turn on the "L" LED
    two = true;
      Serial.println(touchValue2);
  } else {
    digitalWrite(ledPin2, LOW);  // turn off the "L" LED
  }

  if (two == true) {
    Serial.println("two");
    two = false;
    delay(300);
  }



}