#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    float temperatura[5], suma, maximo, minimo = 0, media;
    int i;

    for  (i=1; i <= 5; i++) 
    {
        printf("Ingrese el valor de la temperatura:\n");
        scanf("%f", &temperatura[i]);
    }

    maximo = temperatura[1];
    minimo = temperatura[1];

    for  (i=1; i <= 5; i++) 
    {
        suma = suma + temperatura[i];

        if (maximo < temperatura[i]) 
        {
            maximo = temperatura[i];
        }

        if (minimo > temperatura[i]) 
        {
            minimo = temperatura[i];
        }
    }

    media = suma / i;

    printf("Promedio: %.2f\n", media);
    printf("Maximo: %.2f\n", maximo);
    printf("Minimo: %.2f\n", minimo);

    return 0;
}