// Las constantes no cambias, son para seter los pins
const int PinValvula = 6;     // equivale al pin digital 3 "http://robotshop.com/letsmakerobots//files/field_primary_image/NanoAnalogPinChanges.resized.jpg"

void setup() { 
  
  // setear el pin de valvula como salida
  pinMode(PinValvula, OUTPUT);    
   
}

void loop(){
    digitalWrite(PinValvula, HIGH); // abre la valvula
    delay(10000);    // espera 10 segundos
    digitalWrite(PinValvula, LOW); //apaga la valvula
  } 


