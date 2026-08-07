#include <stdio.h>
#include <stdlib.h>

void promedio(int prm_numeros[], int prm_cantidad) 
{
    int suma = 0;
    for (int i = 0; i < prm_cantidad; i++) 
    {
        suma += prm_numeros[i];
    }
    float promedio = (float)suma / prm_cantidad;
    printf("El promedio de los numeros ingresados es: %.2f\n", promedio);
}

void mayor_menor(int prm_numeros[], int prm_cantidad) 
{
    int mayor = prm_numeros[0];
    int menor = prm_numeros[0];

    for (int i = 1; i < prm_cantidad; i++) 
    {
        if (prm_numeros[i] > mayor) 
        {
            mayor = prm_numeros[i];
        }
        if (prm_numeros[i] < menor) 
        {
            menor = prm_numeros[i];
        }
    }

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
}

void ordenarAscendente(int prm_numeros[], int prm_cantidad) {
    int aux = 0;
    for(int i = 0; i < prm_cantidad; i++) 
    {
        for(int j = 0; j < (prm_cantidad - 1); j++)
        {
            if(prm_numeros[j] > prm_numeros[j+1]) 
            {
                aux = prm_numeros[j];
                prm_numeros[j] = prm_numeros[j+1];
                prm_numeros[j+1] = aux;
            }
        }
    }

    printf("Numeros ordenados ascendentemente: \n");

    for(int i = 0; i < prm_cantidad; i++){
        printf("%d ", prm_numeros[i]);
    }

    printf("\n");
}

int main(int argc, char *argv[]) 
{
    int num1, num2, num3, num4, num5;
    int numeros[5];

    printf("===Operaciones sobre 5 enteros===\n");

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer número: ");
    scanf("%d", &num3);

    printf("Ingrese el cuarto número: ");
    scanf("%d", &num4);

    printf("Ingrese el quinto número: ");
    scanf("%d", &num5);

    numeros[0] = num1;
    numeros[1] = num2;
    numeros[2] = num3;
    numeros[3] = num4;
    numeros[4] = num5;

    printf("===Resultados===\n");

    promedio(numeros, 5);
    mayor_menor(numeros, 5);
    ordenarAscendente(numeros, 5);

    return 0;
}