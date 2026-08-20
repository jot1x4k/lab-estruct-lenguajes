#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int vector[5];

    for (int i=0; i<5; i++)
    {
        printf("Ingrese los valores del vector: \n");
        scanf("%d", &vector[i]);
    } 

    for (int i=0; i<5; i++)
    {
        int* ptr = &vector[i];
        printf("La direccion [%d] es %p y el valor al que apunta es %d. \n", i, ptr, *ptr);
    } 
    
    exit(EXIT_SUCCESS);
}