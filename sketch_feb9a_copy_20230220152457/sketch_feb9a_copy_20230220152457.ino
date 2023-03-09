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
const int ledPin6 = 7;  // pin for the "L" LED on the Arduino Mega
const int touchPin6 = A5;  // pin for the touch sensor
const int ledPin7 = 8;  // pin for the "L" LED on the Arduino Mega
const int touchPin7 = A6;  // pin for the touch sensor
const int ledPin8 = 9;  // pin for the "L" LED on the Arduino Mega
const int touchPin8 = A7;  // pin for the touch sensor
const int ledPin9 = 10;  // pin for the "L" LED on the Arduino Mega
const int touchPin9 = A8;  // pin for the touch sensor
const int ledPin10 = 11;  // pin for the "L" LED on the Arduino Mega
const int touchPin10 = A9;  // pin for the touch sensor
const int ledPin11 = 12;  // pin for the "L" LED on the Arduino Mega
const int touchPin11 = A10;  // pin for the touch sensor
const int ledPin12 = 13;  // pin for the "L" LED on the Arduino Mega
const int touchPin12 = A11;  // pin for the touch sensor
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
  pinMode(ledPin6, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin6, INPUT);  // set the touch sensor pin as an input` 
  pinMode(ledPin7, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin7, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin8, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin8, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin9, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin9, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin10, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin10, INPUT);  // set the touch sensor pin as an input`
  pinMode(ledPin11, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin11, INPUT);  // set the touch sensor pin as an input
  pinMode(ledPin12, OUTPUT);  // set the "L" LED pin as an output
  pinMode(touchPin12, INPUT);  // set the touch sensor pin as an input
  Serial.begin(9600);
}
// bool debouncing = false;  // variable to keep track of debouncing state
// bool debouncing2 = false;  // variable to keep track of debouncing state
// bool debouncing3 = false;  // variable to keep track of debouncing state
// bool debouncing4 = false;  // variable to keep track of debouncing state
// bool debouncing5 = false;  // variable to keep track of debouncing state
// bool debouncing6 = false;  // variable to keep track of debouncing state
// bool debouncing7 = false;  // variable to keep track of debouncing state

bool one = false;
bool two = false;
bool three = false;
bool four = false;
bool five = false;
bool six = false;
bool seven = false;
bool eight = false;
bool nine = false;
bool ten = false;
bool eleven = false;
bool twelve = false;


void loop() {
  int touchValue = analogRead(touchPin);  // read the value from the touch sensor
  int touchValue2 = analogRead(touchPin2);  // read the value from the touch sensor
  int touchValue3 = analogRead(touchPin3);  // read the value from the touch sensor
  int touchValue4 = analogRead(touchPin4);  // read the value from the touch sensor
  int touchValue5 = analogRead(touchPin5);  // read the value from the touch sensor
  int touchValue6 = analogRead(touchPin6);  // read the value from the touch sensor
  int touchValue7 = analogRead(touchPin7);  // read the value from the touch sensor
  int touchValue8 = analogRead(touchPin8);  // read the value from the touch sensor
  int touchValue9 = analogRead(touchPin9);  // read the value from the touch sensor
  int touchValue10 = analogRead(touchPin10);  // read the value from the touch sensor
  int touchValue11 = analogRead(touchPin11);  // read the value from the touch sensor
  int touchValue12 = analogRead(touchPin12);  // read the value from the touch sensor

  //note1
  if (touchValue < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin, HIGH);  // turn on the "L" LED
    one = true;
    two = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin, LOW);  // turn off the "L" LED
  }

  if (one == true && two == false) {
    Serial.println("one");
    one = false;
    delay(200);
  }
  //note 2
    if (touchValue2 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin2, HIGH);  // turn on the "L" LED
    two = true;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin2, LOW);  // turn off the "L" LED
  }

  if (two == true && one == false && three == false && four == false && five == false && six == false && seven == false && eight == false && nine == false && ten == false && eleven == false & twelve == false) {
    Serial.println("two");
    two = false;
    delay(200);
  }

//note 3
    if (touchValue3 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin3, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = true;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin3, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == true && four == false && five == false && six == false && seven == false && eight == false && nine == false && ten == false && eleven == false & twelve == false) {
    Serial.println("three");
    three = false;
    delay(200);
  }
//note4
    if (touchValue4 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin4, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = true;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin4, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == true && five == false && six == false && seven == false && eight == false && nine == false && ten == false && eleven == false && twelve == false) {
    Serial.println("four");
    four = false;
    delay(200);
  }
//note5
    if (touchValue5 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin5, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = true;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin5, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == true && six == false && seven == false && eight == false && nine == false && ten == false && eleven == false && twelve == false) {
    Serial.println("five");
    five = false;
    delay(200);
  }

//note6
    if (touchValue6 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin6, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = true;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin6, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == true && seven == false && eight == false && nine == false && ten == false && eleven == false && twelve == false) {
    Serial.println("six");
    six = false;
    delay(200);
  }

//note7
    if (touchValue7 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin7, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = true;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin7, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == true && eight == false && nine == false && ten == false && eleven == false && twelve == false) {
    Serial.println("seven");
    seven = false;
    delay(200);
  }
//note8

   if (touchValue8 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin8, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = true;
    nine = false;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin8, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == false && eight == true && nine == false && ten == false && eleven == false && twelve == false) {
    Serial.println("eight");
    eight = false;
    delay(200);
  }
//note9
   if (touchValue9 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin9, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = true;
    ten = false;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin9, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == false && eight == false && nine == true && ten == false && eleven == false && twelve == false) {
    Serial.println("nine");
    nine = false;
    delay(200);
  }
//note10
   if (touchValue10 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin10, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = true;
    eleven = false;
    twelve = false;
  } else {
    digitalWrite(ledPin10, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == false && eight == false && nine == false && ten == true && eleven == false && twelve == false) {
    Serial.println("ten");
    ten = false;
    delay(200);
  }
//note11
   if (touchValue11 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin11, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = true;
    twelve = false;
  } else {
    digitalWrite(ledPin11, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == false && eight == false && nine == false && ten == false && eleven == true && twelve == false) {
    Serial.println("eleven");
    eleven = false;
    delay(200);
  }
//note12
   if (touchValue12 < threshold) {  // if the touch sensor is touched
    digitalWrite(ledPin12, HIGH);  // turn on the "L" LED
    two = false;
    one = false;
    three = false;
    four = false;
    five = false;
    six = false;
    seven = false;
    eight = false;
    nine = false;
    ten = false;
    eleven = false;
    twelve = true;
  } else {
    digitalWrite(ledPin12, LOW);  // turn off the "L" LED
  }

  if (two == false && one == false && three == false && four == false && five == false && six == false && seven == false && eight == false && nine == false && ten == false && eleven == false & twelve == true) {
    Serial.println("twelve");
    twelve = false;
    delay(200);
  }

}