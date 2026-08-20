# Laboratorio de Estructuras de Lenguajes
## Universidad del Cauca
## Taller 1 
### Presentado por: Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>

>**Ejercicio 4: Modularidad con funciones.** Escribir un programa que solicite al usuario dos números enteros. Realizar las cuatro operaciones básicas (+, -, *, /) definiendo funciones y mostrar los resultados. ¿Por qué es importante dividir el código en funciones? ¿Cómo podríamos reutilizar las funciones definidas en otro programa?

Importancia de la División Funcional
Abstracción: Oculta complejidad de implementación. El llamador interactúa con una interfaz (nombre, parámetros, retorno), no con detalles internos.
Cohesión y Acoplamiento: Cada función resuelve un único problema bien definido. Reduce dependencias entre módulos y facilita cambios locales sin efectos colaterales globales.
Testabilidad: Unidades pequeñas son verificables de forma aislada. Permite pruebas unitarias deterministas sin configurar estado global complejo.
Mantenibilidad: Código duplicado es deuda técnica. Centralizar lógica en funciones elimina redundancia; correcciones se propagan automáticamente.
Legibilidad: Nombres descriptivos actúan como documentación viva. El flujo principal se lee como narrativa de alto nivel.

