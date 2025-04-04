# 🚗 Clasificación de Posición en un Robot Seguidor de Línea usando Árbol de Decisión e Implementación en Arduino

## 👨‍💻 Descripción  
Este proyecto consiste en el desarrollo de un robot seguidor de línea simulado, que mediante sensores infrarrojos digitales detecta la posición de una línea negra sobre fondo blanco. La lógica de control fue implementada a partir de un **árbol de decisión entrenado en Jupyter Notebook con Python** y posteriormente traducido a C++ para ser simulado en Proteus utilizando Arduino UNO.

## 🎯 Objetivo  
Implementar un modelo de clasificación tipo árbol de decisión para controlar un robot seguidor de línea en simulación. El objetivo es que el robot tome decisiones de movimiento según las lecturas de sensores, basadas en el modelo entrenado.

## 🧠 Lógica de Clasificación  
Se utilizaron tres sensores infrarrojos digitales (izquierdo, central y derecho) para determinar la posición de la línea respecto al robot.  
El modelo considera también los valores **anteriores** de los sensores, permitiendo una lógica más robusta.  
El árbol de decisión clasifica los estados en diferentes clases que corresponden a acciones específicas del robot: avanzar recto, girar, ajustar dirección o detenerse.

## ⚙️ Simulación  
- **Simulador utilizado:** Proteus 8 Professional  
- **Microcontrolador:** Arduino UNO  
- **Sensores:** Infrarrojos simulados con interruptores digitales  
- **Actuadores:** Motores DC simulados como cargas PWM  
- **Entorno de codificación:** Arduino IDE (código en C)

## 🔌 Pines usados en Arduino  
| Componente        | Pin Arduino |
|-------------------|-------------|
| Sensor Izquierdo  | D11         |
| Sensor Central    | D12         |
| Sensor Derecho    | D10         |
| Motor Izquierdo   | PWM 3       |
| Motor Derecho     | PWM 5       |

## 🧾 Estructura del Código

### Declaración de pines y velocidades
```cpp
int rapido = 255, medio = 150, lento = 100, stop = 0;
```

### Lectura de sensores y estados previos
Se registran tanto las lecturas actuales como las anteriores:
```cpp
s_i = digitalRead(pinSensorIzq);
s_c = digitalRead(pinSensorCen);
s_d = digitalRead(pinSensorDer);

s_i_p = s_i;
s_c_p = s_c;
s_d_p = s_d;
```

### Árbol de decisión
El árbol evalúa todas las posibles combinaciones entre los sensores actuales y anteriores, para activar los motores con diferentes niveles de velocidad.

Ejemplo de clase que ajusta hacia la derecha:
```cpp
analogWrite(motorIzq, medio);
analogWrite(motorDer, rapido);
```

Ejemplo de clase que ajusta hacia la izquierda:
```cpp
analogWrite(motorIzq, rapido);
analogWrite(motorDer, medio);
```

## 📌 Consideraciones Finales  
- El código se desarrolló completamente en simulación usando Proteus, no se implementó físicamente.  
- El robot muestra un comportamiento funcional en línea recta y giros hacia la derecha e izquierda.  
- El árbol de decisión puede simplificarse o reentrenarse para mayor eficiencia y balance.

## 🧪 Resultados  
El robot simulado sigue correctamente una línea con giros suaves y algunos ajustes. La implementación fue efectiva en términos de prueba lógica y estructura de decisión, y representa una base sólida para su futura implementación física.

---

**Autor**: Gabriel Carrizales

---


