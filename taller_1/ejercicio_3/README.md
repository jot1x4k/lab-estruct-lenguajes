# Laboratorio de Estructuras de Lenguajes
## Universidad del Cauca
## Taller 1 
### Presentado por: Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>

>**Ejercicio 3: Escribir un programa en C que implemente diferentes estructuras repetitivas para resolver
varias tareas.** Primero, utilizar un bucle for para imprimir los primeros 15 números naturales
en orden descendente. Luego, emplear un bucle while para mostrar los números impares
hasta 30 en orden inverso. Posteriormente, con un bucle do-while, calcular el factorial de
un número ingresado por el usuario, asegurando que el número sea válido. Además,
solicitar al usuario un número n y calcular la suma de los primeros n números naturales
usando un bucle for. Finalmente, explicar la diferencia entre for, while y do-while,
destacando sus aplicaciones y cuándo es más eficiente utilizar cada uno

Diferencias Estructurales
- for: Inicialización, condición y actualización integradas en la cabecera. Control explícito del contador.
- while: Evaluación de condición antes de cada iteración. Cuerpo puede no ejecutarse nunca.
- do-while: Ejecución del cuerpo antes de evaluar la condición. Garantiza al menos una ejecución.

Caso de Uso Ideal
- for: Iteración sobre rangos conocidos, arrays, listas indexadas.
Localidad de referencia; variable de control acotada al scope del bucle.
- while: Lectura de streams, validación de entrada, búsqueda con condición de parada indeterminada.
Desacopla lógica de terminación de la gestión de contadores.
- do-while: Menús interactivos, procesamiento de tokens donde se requiere consumir antes de validar.