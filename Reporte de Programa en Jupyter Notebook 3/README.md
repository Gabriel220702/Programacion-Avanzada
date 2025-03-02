# 📌 **Implementación de un Clasificador de Calificaciones Finales de Estudiantes - Naïve Bayes**

## 📖 **Descripción**  
Este proyecto implementa un **Clasificador de Calificaciones Finales** de estudiantes utilizando el algoritmo **Naïve Bayes**. El objetivo es predecir la calificación final de los estudiantes basada en sus características académicas y personales. Se presentan dos versiones del código:  
1. **Versión Básica:** Implementación inicial del clasificador Naïve Bayes para comprobar su funcionamiento con datos simples.  
2. **Versión Optimizada:** Incluye mejoras en el preprocesamiento de datos, ajuste de hiperparámetros, y evaluación con métricas más detalladas.

## 🎯 **Objetivo**  
El objetivo de este proyecto es aplicar el algoritmo **Naïve Bayes** para predecir la calificación final de los estudiantes, considerando características como horas de estudio, número de cursos completados y el puntaje en exámenes previos.

## 🛠️ **Tecnologías Utilizadas**  
- **Python**  
- **Pandas** (para manejo y análisis de datos)  
- **NumPy** (para operaciones numéricas)  
- **Scikit-learn** (para implementación del algoritmo Naïve Bayes)  
- **Matplotlib** y **Seaborn** (para visualización de datos)

## 📌 **Explicación del Código**  
### 🔹 **Primera Versión (Código Básico)**  
- Implementa el algoritmo **Naïve Bayes** utilizando los módulos estándar de **Scikit-learn**.  
- Entrenamiento y predicción realizados de manera sencilla.  
- **Limitaciones:** Código básico sin optimización ni preprocesamiento avanzado.  

### 🔹 **Segunda Versión (Código Optimizado)**  
- **Preprocesamiento de datos**: Manejo de valores nulos, codificación de variables categóricas y normalización de datos.  
- **Ajuste de hiperparámetros**: Optimización del rendimiento del modelo ajustando la tasa de aprendizaje y la división de los datos de entrenamiento y prueba.  
- **Mejoras en la visualización**: Resultados presentados en tablas y gráficos para facilitar el análisis de desempeño.  

## 📊 **Resultados y Análisis**  
- El modelo Naïve Bayes logra clasificar correctamente las calificaciones finales de los estudiantes con una precisión del 78% en el conjunto de prueba.  
- **Errores comunes**: El modelo tiende a cometer más **falsos negativos**, clasificando estudiantes con calificaciones altas como de menor rendimiento.  
- **Optimización**: Se observó una mejora en la estabilidad del modelo con la normalización de los datos.

## ✅ **Conclusión**  
Este proyecto demuestra la efectividad del **algoritmo Naïve Bayes** para la clasificación de calificaciones finales de estudiantes, especialmente cuando los datos son linealmente separables. La versión optimizada presenta mejoras en la precisión y estabilidad del modelo, lo que permite una experiencia de usuario más fluida.  

**Para proyectos más avanzados**, se puede explorar el uso de modelos más complejos como **redes neuronales** o **modelos de aprendizaje profundo** para abordar problemas no lineales.

## 🚀 **Cómo Usar**  
1. Ejecuta el código en **Jupyter Notebook** o Google Colab.  
2. Carga el dataset de calificaciones de estudiantes.  
3. Ajusta las características de entrada para predecir las calificaciones finales de nuevos estudiantes.  
4. Analiza los resultados y ajusta los parámetros según sea necesario.

📌 **Autor:** *[Gabriel Carrizales]*
