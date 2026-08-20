/**
 * @file 
 * @brief Inversion de un arreglo de n elementos mediante punteros
 * @author Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>
 * @copyright MIT License
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Imprime un arreglo por consola
 * @param arreglo[] Arreglo a imprimir
 * @param longitud Tamaño del arreglo
 */
void imprimirArreglo(int* arreglo, int longitud) 
{
    printf("{");
    for(size_t i = 0; i < longitud; i++) 
    {
        printf(" %d ", arreglo[i]);
    }
    printf("}\n");
}

/**
 * @brief Invierte un arreglo mediante un intercambio con apuntadores minetras los limites superiores e inferiores no se encuentren.
 * @param arr Direccion al primer elemento del arreglo
 * @param longitud Tamaño del arreglo
 * 
 */
void invertirArreglo(int *arr, int longitud)
{
    int* inicio = arr;
    int* fin = arr + longitud - 1;

    while(inicio < fin) {
        int aux = *inicio;
        *inicio = *fin;
        *fin = aux;

        inicio++;
        fin--;
    }
}

int main()
{
    int longitud;
    printf("===Invertir Arreglo===\n");
    printf("Ingrese el tamaño del arreglo: \n");
    scanf("%d", &longitud);

    int arr[longitud];

    printf("Ingrese los elementos al arreglo:");
    for (size_t i = 0; i < longitud; i++)
    {   
        printf("\nArreglo[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Arreglo original: \n");
    imprimirArreglo(arr, longitud);

    printf("Arreglo invertido: \n");
    invertirArreglo(arr, longitud);
    imprimirArreglo(arr, longitud);
    
    exit(EXIT_SUCCESS);
}