#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int n, menor, aux, j;

    n = atoi(argv[1]);

    if(argc != n + 2) {
        fprintf(stderr, "Usage: %s n v1 v2 ... vn\n", argv[0]);
        return 1;
    }

    int vector[n], i;
    
    for (i=0; i<n; i++)
    {
        vector[i] = atoi(argv[i + 2]);
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