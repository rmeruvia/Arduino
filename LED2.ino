//Simple arduino program to have three LEDs fade out into the next

#define BLUE 5 
#define GREEN 6
#define RED 3

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  digitalWrite(GREEN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(RED, HIGH);
  for(int redVal = 255; redVal >= 0; redVal--){
    delay(5);  
    analogWrite(RED, redVal);
  }
  digitalWrite(BLUE, HIGH);
  for(int blueVal = 255; blueVal >= 0; blueVal--){
    delay(5);  
    analogWrite(BLUE, blueVal);    
  }
  digitalWrite(GREEN, HIGH);
  for(int greenVal = 255; greenVal >= 0; greenVal--){
    delay(5);  
    analogWrite(GREEN, greenVal);
  }
}
