char data = 0;
void setup() {
Serial.begin(9600);
pinMode(2,OUTPUT);
}

void loop() {
  while(Serial.available()>0){
    
     data = Serial.read();
  Serial.println(data);
  delay(500);
    Serial.print('Data Found');
    if(data == '1'){
      Serial.print('Turning on the LED');
      digitalWrite(2,HIGH);
      }    else if(data == '0'){
      Serial.print('Turning on the LED');
      digitalWrite(2,LOW);
      }else{
        Serial.print('Data doesnot macth');
            Serial.print(data);
    Serial.print('\n');
        }
      
    }
}
