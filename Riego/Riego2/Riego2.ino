int PinValvula = 11;     // equivale al pin digital 11 "http://robotshop.com/letsmakerobots//files/field_primary_image/NanoAnalogPinChanges.resized.jpg"

void setup() { 

  // setear el pin de valvula como salida
  pinMode(PinValvula, OUTPUT);    
  Serial.begin(9600); 
}

void loop(){
  int sensorValue = analogRead(A0);
  if (sensorValue >= 700)
  {
    digitalWrite(PinValvula, HIGH); // abre la valvula
  }
  else if (sensorValue < 700){
    digitalWrite(PinValvula, LOW); //apaga la valvula
  }
  delay(1000); 
  Serial.print(sensorValue);
} 


