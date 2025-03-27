const int pinSensorIzq = 11;
const int pinSensorCen = 12;
const int pinSensorDer = 10;
const int motorIzq = 3;
const int motorDer = 5;

int rapido = 255, medio = 127, lento = 60, stop = 0;
int s_i = 0, s_c = 0, s_d = 0;

void setup(){
   pinMode(pinSensorIzq, INPUT);
   pinMode(pinSensorCen, INPUT);
   pinMode(pinSensorDer, INPUT);
   pinMode(motorIzq, OUTPUT);
   pinMode(motorDer, OUTPUT);
}

void loop(){
   s_i = digitalRead(pinSensorIzq);
   s_c = digitalRead(pinSensorCen);
   s_d = digitalRead(pinSensorDer);
 
//Decisiones para motor Izquierdo
   if(s_i == 0)
      analogWrite(motorIzq, rapido);
   if(s_i == 1)
   {
      if(s_d == 0)
      {
   if(s_c == 0)
   analogWrite(motorIzq, lento);
   if(s_c == 1)
   analogWrite(motorIzq, medio);
      }
      if(s_d == 1)
      analogWrite(motorIzq, rapido); 
   }
   
   

//Decisiones para motor Derecho
if (s_d == 0)
analogWrite(motorDer, rapido);
if (s_d == 1)
   {
      if(s_c == 0)
      {
   if(s_i == 0)
   analogWrite(motorDer, lento);
   if(s_i == 1)
   analogWrite(motorDer, medio);
      }
      if(s_c == 1)
      {
   if(s_i == 0)
   analogWrite(motorDer, medio);
   if(s_i == 1)
   analogWrite(motorDer, lento);
      }
   }
   
   
   delay(50);
}
