/**
 * @file
 * @brief Intercambio de dos valores enteros mediante punteros
 * @author Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>
 * @copyright MIT License
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief intercambia los valores de dos variables enteras
 * @param ptr1 apuntador al primer entero
 * @param ptr2 apuntador al segundo entero
 */
void intercambioEnteros(int* ptr1, int* ptr2) {

    int aux = *ptr1;
    
    *ptr1 = *ptr2;
    *ptr2 = aux;

}

int main()
{
    int num1, num2;

    printf("===Intercambio de valores===2\n");
    printf("Ingrese el primer entero: \n");
    scanf("%d", &num1);

    printf("Ingrese el segundo entero: \n");
    scanf("%d", &num2);
    
    printf("ANTES del intercambio: \nPrimer numero: %d\nSegundo numero: %d\n", num1, num2);

    intercambioEnteros(&num1, &num2);

    printf("DESPUES del intercambio: \nPrimer numero: %d \n Segundo numero: %d\n", num1, num2);
    
    return EXIT_SUCCESS;
}