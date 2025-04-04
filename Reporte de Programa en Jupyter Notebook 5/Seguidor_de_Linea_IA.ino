const int pinSensorIzq = 11;
const int pinSensorCen = 12;
const int pinSensorDer = 10;
const int motorIzq = 3;
const int motorDer = 5;

int rapido = 255, medio = 150, lento = 100, stop = 0;
int s_i = 0, s_c = 0, s_d = 0;
int s_i_p = 0, s_c_p = 0, s_d_p = 0; // Valores previos de los sensores

void setup() {
   pinMode(pinSensorIzq, INPUT);
   pinMode(pinSensorCen, INPUT);
   pinMode(pinSensorDer, INPUT);
   pinMode(motorIzq, OUTPUT);
   pinMode(motorDer, OUTPUT);
}

void loop() {
   // Leemos los valores actuales de los sensores
   s_i = digitalRead(pinSensorIzq);  // Sensor izquierdo
   s_c = digitalRead(pinSensorCen);  // Sensor central
   s_d = digitalRead(pinSensorDer);  // Sensor derecho

   // Variables previas para la próxima lectura
   s_i_p = s_i;
   s_c_p = s_c;
   s_d_p = s_d;

   // Árbol de decisiones basado en los valores de los sensores

   if (s_c <= 0.50) {  // El sensor central está sobre la línea (valor bajo, detectando la línea)
      if (s_c_p <= 0.50) {  // Si el sensor central anteriormente también estaba sobre la línea
         if (s_i_p <= 0.50) {  // Si el sensor izquierdo estaba sobre la línea
            if (s_d_p <= 0.50) {  // Si el sensor derecho estaba sobre la línea
               if (s_d <= 0.50) {  // Si el sensor derecho está sobre la línea
                  // Caso 8: Robot avanza lentamente (todos los sensores detectan la línea)
                  analogWrite(motorIzq, lento);
                  analogWrite(motorDer, lento);
               } else {
                  // Caso 2: Robot gira a la derecha (solo el sensor izquierdo detecta la línea)
                  analogWrite(motorIzq, rapido);
                  analogWrite(motorDer, lento);
               }
            } else {
               // Caso 10: Robot gira ligeramente a la derecha (sensor izquierdo detectando la línea)
               analogWrite(motorIzq, medio);
               analogWrite(motorDer, rapido);
            }
         } else {
            // Caso 10: Robot gira ligeramente a la derecha (sensor central sobre la línea, pero el izquierdo no)
            analogWrite(motorIzq, medio);
            analogWrite(motorDer, rapido);
         }
      } else {
         // Caso 10: Robot sigue recto (sensor central sobre la línea, el anterior estaba sobre la línea)
         analogWrite(motorIzq, rapido);
         analogWrite(motorDer, medio);
      }
   } else {  // El sensor central no está sobre la línea (valor alto, no detecta la línea)
      if (s_c_p <= 0.50) {  // Si el sensor central estaba sobre la línea en la lectura previa
         if (s_i <= 0.50) {  // Si el sensor izquierdo está sobre la línea
            if (s_i_p <= 0.50) {  // Si el sensor izquierdo estaba sobre la línea en la lectura anterior
               if (s_d <= 0.50) {  // Si el sensor derecho está sobre la línea
                  if (s_d_p <= 0.50) {  // Si el sensor derecho estaba sobre la línea en la lectura anterior
                     // Caso 5: Robot gira a la izquierda (sensor derecho no detecta la línea)
                     analogWrite(motorIzq, lento);
                     analogWrite(motorDer, rapido);
                  } else {
                     // Caso 10: Robot sigue recto (sensor izquierdo detecta la línea)
                     analogWrite(motorIzq, medio);
                     analogWrite(motorDer, rapido);
                  }
               } else {
                  // Caso 4: Robot gira a la derecha (solo el sensor izquierdo detecta la línea)
                  analogWrite(motorIzq, rapido);
                  analogWrite(motorDer, medio);
               }
            } else {
               // Caso 10: Robot sigue recto (sensor izquierdo no detecta la línea)
               analogWrite(motorIzq, rapido);
               analogWrite(motorDer, medio);
            }
         } else {
            if (s_d_p <= 0.50) {  // Si el sensor derecho estaba sobre la línea en la lectura anterior
               // Caso 6: Robot gira a la izquierda (sensor izquierdo detecta la línea)
               analogWrite(motorIzq, medio);
               analogWrite(motorDer, lento);
            } else {
               // Caso 10: Robot sigue recto (ningún sensor detecta la línea)
               analogWrite(motorIzq, lento);
               analogWrite(motorDer, rapido);
            }
         }
      } else {
         // Caso 10: Robot avanza recto a máxima velocidad (ningún sensor detecta la línea)
         analogWrite(motorIzq, rapido);
         analogWrite(motorDer, rapido);
      }
   }

   delay(50);  // Pequeño retraso entre cada lectura de los sensores
}
