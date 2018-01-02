int PinValvula = 11;     // equivale al pin digital 3 "http://robotshop.com/letsmakerobots//files/field_primary_image/NanoAnalogPinChanges.resized.jpg"

void setup() { 

  // setear el pin de valvula como salida
  pinMode(PinValvula, OUTPUT);    

}

void loop(){
  digitalWrite(PinValvula, HIGH); // abre la valvula
  delay(1000);    // espera 10 segundos
  digitalWrite(PinValvula, LOW); //apaga la valvula
  delay(1000); 
} 

