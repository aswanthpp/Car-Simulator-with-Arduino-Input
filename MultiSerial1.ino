
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;
int a=13;
int b=12;


void setup() {

  Serial.begin(9600);

}

void loop() {

  int val,acc,dcc;
  //val=Serial.read();
  //if(val == 'S'){
    sensorValue = analogRead(sensorPin);
    if(sensorValue>505)
      Serial.write('l');
    else
      Serial.write('r');
      
       Serial.println();*/ 
  //}
  //else{
    acc=digitalRead(a);
    dcc=digitalRead(b);
    if(acc==HIGH && dcc==HIGH){
      Serial.write('a');
    }
    else if(acc==HIGH && dcc==LOW){
    Serial.write('a');
    }
    else if(acc==LOW && dcc==HIGH){
      Serial.write('b');
    }
    else if(acc=LOW && dcc==LOW){
      Serial.write('a');
    }
  //}
    Serial.println(); 
    delay(500);
  

  // read from port 0, send to port 1:
  //if (Serial.available()) {
   // int inByte = Serial.read();
    
  //}
}
