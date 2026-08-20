#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int n, aux, j, i;

    printf("Ingrese la cantidad de elementos del vector: \n");
    scanf("%d", &n);

    int arreglo[n];

    for(i=0; i<n; i++)
    {
        printf("Ingrese el elemento %d del vector: \n", i+1);
        scanf("%d", &arreglo[i]);
    }

    // Implement bubble sort
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arreglo[j] > arreglo[j+1])
            {
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }

    printf("El vector ordenado es: \n");
    for(i=0; i<n; i++)
    {
        printf("%d ", arreglo[i]);
    }

    printf("\n");

    return 0;
}