
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int limite;
    short aux;
    int num;
    long long factorial = 1;
    char esEntPos = 0;
    int suma = 0;

    printf("===ESTRUCTURAS REPETITIVAS===\n");
    printf("1. Imprimir los 15 primeros numeros naturales en orden ascendente.\n");
    for (int i = 0; i < 15; i++) 
    {
        printf("%d ", i+1);
    }

    printf("\n\n2. Numeros impares hasta el 30 en orden inverso.\n");
    limite = 30;
    while (limite > 0) 
    {
        aux = limite;
        if(!(aux%2==0)) 
        {
            printf("%hu ", aux);
        }
        limite--;
    }

    limite = 0;

    printf("\n\n3. Calcular factorial.\n");
    while (esEntPos != 1)
    {
        printf("Ingrese un numero entero no negativo: ");
        scanf("%d", &num);

        if (num < 0) {
            printf("El numero ingresado NO es valido. Intente nuevamente.\n");
        } else {
            esEntPos = 1;
        }
    }

    for (int i = 2; i <= num; i++) {
        factorial *= i;
    }
    printf("Factorial de %d = %lld\n", num, factorial);

    
    printf("\n\n4. Calcular la suma de los naturales hasta un numero N.\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &limite);
    printf("Los %d primeros naturales son: \n", limite);

    for (int i = 1; i <= limite; i++) {
        printf("%d ", i);
        suma = suma + i;
    }

    printf("\nY la suma de ellos es: %d\n", suma);

    return 0;
}