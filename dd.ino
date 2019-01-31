int RED = 13;
int GREEN = 12;
int ir1 = 7;
int ir3 = 6;
int ir4 = 5;
int ir2 = 4;

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  Serial.begin(9600);  
}
void loop() { 
  if ((digitalRead(ir1) && digitalRead(ir2)) == LOW)
  {
    Serial.println("Heavy traffic");
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    delay(5000);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    delay(10000);
   
  }
  else if ((digitalRead(ir3) && digitalRead(ir4)) == LOW)
  {
    Serial.println("Low traffic");
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
    delay(10000);
    digitalWrite(GREEN, HIGH);
    digitalWrite(RED, LOW);
    delay(5000);
  }
  else
  {
    Serial.println("Path is clear");
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, LOW);
    delay (10000);
  }
}
