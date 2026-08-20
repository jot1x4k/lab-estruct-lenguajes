#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if (argc != 6) {
        fprintf(stderr, "Usage: %s t1 t2 t3 t4 t5\n", argv[0]);
        return 1;
    }

    float temperatura[5];
    float suma = 0.0f;
    float maximo, minimo, media;

    for (int i = 0; i < 5; i++) 
    {
        temperatura[i] = atof(argv[i + 1]);
    }

    maximo = temperatura[0];
    minimo = temperatura[0];

    for (int i = 0; i < 5; i++) 
    {
        suma += temperatura[i];

        if (temperatura[i] > maximo) 
            maximo = temperatura[i];

        if (temperatura[i] < minimo) 
            minimo = temperatura[i];
    }

    media = suma / 5.0f;

    printf("Promedio: %.2f\n", media);
    printf("Maximo: %.2f\n", maximo);
    printf("Minimo: %.2f\n", minimo);

    return 0;
}