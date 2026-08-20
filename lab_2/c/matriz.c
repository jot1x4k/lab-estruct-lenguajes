#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    int matriz[4][4];
    int menor, mayor;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("Ingrese el elemento [%d][%d] de la matriz: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    mayor = matriz[0][0];

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
            if(matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
            }
        }
    }

    printf("El menor elemento es: %d\n", menor);
    printf("El mayor elemento es: %d\n", mayor);

    return 0;
}