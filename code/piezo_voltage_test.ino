/*

*/
//definepins
const int piezopin = A0; 

//

void setup() {
  Serial.begin(9600);
}

void loop() {
    int piezoADC = analogRead(piezopin);
    float piezoV = piezoADC / 1023.0 * 5.0;
      Serial.println(piezoV);
      
      
    
}