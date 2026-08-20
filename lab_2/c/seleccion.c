#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int n, menor, aux, j;

    printf("Ingrese la cantidad de elementos del vector: \n");
    scanf("%d", &n);

    int vector[n], i;

    printf("Ingrese los elementos del vector a ordernar: \n");
    
    for (i=0; i<n; i++)
    {
        scanf("%d\n", &vector[i]);
    }

    for (i=0; i<n; i++)
    {
        menor = i;

        for (j=i+1; j<n; j++)
        {
            if (vector[j] < vector[menor])
            {
                menor = j;
            }
        }

        aux = vector[i];
        vector[i] = vector[menor];
        vector[menor] = aux;
    }  

    printf("El vector ordenado es: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", vector[i]);
    }
    
    printf("\n");

    return 0;
}