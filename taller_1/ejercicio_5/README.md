# Laboratorio de Estructuras de Lenguajes
## Universidad del Cauca
## Taller 1 
### Presentado por: Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>

>**Ejercicio 5: Escribir un programa en C que solicite al usuario 5 números enteros, los almacene en un arreglo y realice diversas operaciones sobre ellos.** Primero, calcular el promedio de los números ingresados y mostrarlo en pantalla. Luego, determinar y mostrar el número mayor y el número menor dentro del arreglo. A continuación, ordenar los números en orden ascendente utilizando un algoritmo de ordenamiento y mostrar el arreglo ordenado. Finalmente, explicar cómo funcionan los arreglos en C, y cómo se almacenan los datos en memoria.

Un arreglo en C es simplemente un bloque contiguo de memoria donde los elementos se almacenan uno tras otro sin metadatos; el nombre del arreglo actúa como la dirección base de ese bloque, y acceder a `arr[i]` equivale a calcular `base + (i × tamaño_del_tipo)` para llegar directamente a la posición deseada. Esto significa que no hay verificación de límites, que pasar un arreglo a una función transfiere solo la dirección (no una copia), y que el programador debe gestionar manualmente el tamaño y la integridad de los datos, ya que el lenguaje no almacena ni protege esa información en tiempo de ejecución.
