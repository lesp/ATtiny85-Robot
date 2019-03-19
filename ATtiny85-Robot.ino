void forward(){
  //Forward
  //Motor A
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  //Motor B
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
void reverse(){
  //Reverse
  //Motor A
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  //Motor B
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
}
void left(){
  //Spin Left
  //Motor A forwards
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  //Motor B backwards
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);    
}
void right(){
  //Spin Right
  //Motor A backwards
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  //Motor B forwards
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
void stop(){
  //All motors off
  //Motor A stop
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  //Motor B stop
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(1000);
  reverse();
  delay(1000);
  left();
  delay(1000);
  right();
  delay(1000);
  stop();
  delay(1000);
 
}
