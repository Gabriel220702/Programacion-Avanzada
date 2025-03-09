# 📌 Implementación de un Modelo de Regresión Lineal para Predecir Calificaciones Finales de Estudiantes

📖 **Descripción**  
Este proyecto implementa un modelo de regresión lineal para predecir las calificaciones finales de estudiantes basándose en diferentes características académicas y personales como horas de estudio, puntuaciones en exámenes y más. El objetivo es utilizar estos datos para entender mejor los factores que impactan las calificaciones finales y predecir el rendimiento académico de los estudiantes.

🎯 **Objetivo**  
El objetivo de este proyecto es aplicar la regresión lineal para predecir la calificación final de los estudiantes, utilizando características como el número de horas de estudio, el puntaje de exámenes y la tasa de asistencia.

🛠️ **Tecnologías Utilizadas**  
- **Python**: Lenguaje de programación utilizado.
- **Pandas**: Para la manipulación y análisis de datos.
- **NumPy**: Para operaciones numéricas.
- **Scikit-learn**: Para implementar el modelo de regresión lineal.
- **Matplotlib y Seaborn**: Para visualización de datos.
  
📌 **Implementación del Modelo de Regresión Lineal**  
1. **Preprocesamiento de Datos**  
   - Se gestionan valores nulos.
   - Se normalizan las variables numéricas para mejorar el rendimiento del modelo.
   - Se dividen los datos en conjunto de entrenamiento y prueba para evaluar el modelo de manera precisa.

2. **Modelo de Regresión Lineal**  
   - Se ajusta el modelo de regresión lineal a las características de los estudiantes y sus calificaciones finales.
   - Se evalúa el desempeño del modelo utilizando métricas como el **error cuadrático medio (MSE)** y el **coeficiente de determinación (R²)**.
   
3. **Visualización de Resultados**  
   - Se presentan los resultados en gráficos, mostrando la relación entre las características seleccionadas y las calificaciones finales predichas.
   - Se muestra una gráfica de dispersión con los valores reales vs. los predichos, además de la línea de tendencia ajustada.

📊 **Resultados y Análisis**  
El modelo de regresión lineal logró predecir las calificaciones finales con un **R² de 0.75** en el conjunto de prueba, lo que indica una buena capacidad de predicción.  
- **Errores comunes**: Algunos estudiantes con calificaciones extremas o inusuales no fueron correctamente clasificados por el modelo.  
- **Optimización**: Se observó una mejora al estandarizar los datos y eliminar características irrelevantes.

✅ **Conclusión**  
Este proyecto demuestra la efectividad de la regresión lineal para predecir las calificaciones finales de estudiantes en función de características académicas y personales. Aunque el modelo es simple y tiene limitaciones en la precisión, proporciona un buen punto de partida para explorar otros enfoques más complejos.

🚀 **Cómo Usar**  
1. Ejecuta el código en Jupyter Notebook o Google Colab.
2. Carga el dataset de calificaciones de estudiantes.
3. Ajusta las características de entrada para predecir las calificaciones finales de nuevos estudiantes.
4. Analiza los resultados y ajusta los parámetros del modelo según sea necesario.

---

**Autor**: Gabriel Carrizales

---
