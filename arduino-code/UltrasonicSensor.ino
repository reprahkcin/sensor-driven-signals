#define trigPin1 22
#define echoPin1 23
#define trigPin2 24
#define echoPin2 25
#define trigPin3 26
#define echoPin3 27
#define trigPin4 28
#define echoPin4 29
#define trigPin5 30
#define echoPin5 31
#define trigPin6 32
#define echoPin6 33
#define trigPin7 34
#define echoPin7 35
#define trigPin8 36
#define echoPin8 37
#define trigPin9 38
#define echoPin9 39

int reading(int trigPin, int echoPin){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int reading = pulseIn(echoPin, HIGH);
  int value = map(reading, 0,15000, 1, 12);
  return value;
}

void printToSerial(){
  int sensor1 = reading(trigPin1, echoPin1);
  int sensor2 = reading(trigPin2, echoPin2);
  int sensor3 = reading(trigPin3, echoPin3); 
  int sensor4 = reading(trigPin4, echoPin4); 
  int sensor5 = reading(trigPin5, echoPin5); 
  int sensor6 = reading(trigPin6, echoPin6);
  int sensor7 = reading(trigPin7, echoPin7);
  int sensor8 = reading(trigPin8, echoPin8);
  int sensor9 = reading(trigPin9, echoPin9);
  
  Serial.print(sensor1);
  Serial.print(" ");
  Serial.print(sensor2);
  Serial.print(" ");
  Serial.print(sensor3);
  Serial.print(" ");
  Serial.print(sensor4);
  Serial.print(" ");
  Serial.print(sensor5);
  Serial.print(" ");
  Serial.print(sensor6);
  Serial.print(" ");
  Serial.print(sensor7);
  Serial.print(" ");
  Serial.print(sensor8);
  Serial.print(" ");
  Serial.println(sensor9);
  
}

void setup() {
  Serial.begin (9600);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
  pinMode(trigPin4, OUTPUT);
  pinMode(echoPin4, INPUT);
  pinMode(trigPin5, OUTPUT);
  pinMode(echoPin5, INPUT);
  pinMode(trigPin6, OUTPUT);
  pinMode(echoPin6, INPUT);
  pinMode(trigPin7, OUTPUT);
  pinMode(echoPin7, INPUT);
  pinMode(trigPin8, OUTPUT);
  pinMode(echoPin8, INPUT);
  pinMode(trigPin9, OUTPUT);
  pinMode(echoPin9, INPUT);
}
 
void loop() {
  
  printToSerial();

}
