/**
 * @file 
 * @brief Calculadora basica con llamado dinamico de funciones mediante punteros
 * @author Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>
 * @copyright MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumar(int a, int b) 
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

float dividir(int a, int b)
{
    if (b == 0) { printf("No se puede dividir entre cero. \n"); return NAN; }
    return (float)a / b;
}

int leerNumero()
{
    int num = 0;
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    return num;
}

int main()
{   
    int (*ptrSumar)(int, int) = sumar;
    int (*ptrRestar)(int, int) = restar;
    int (*ptrMultiplicar)(int, int) = multiplicar;
    float (*ptrDividir)(int, int) = dividir; 

    int opcion, num1, num2 = 0;

    while (opcion != 5)
    {
        printf("===Calculadora===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                printf("SUMAR\n");
                num1 = leerNumero();
                num2 = leerNumero();
                printf("Resultado: %d\n", ptrSumar(num1, num2));
            break;

            case 2:
                printf("RESTAR\n");
                num1 = leerNumero();
                num2 = leerNumero();
                printf("Resultado: %d\n", ptrRestar(num1, num2));
            break;

            case 3:
                printf("MULTIPLICAR\n");
                num1 = leerNumero();
                num2 = leerNumero();
                printf("Resultado: %d\n", ptrMultiplicar(num1, num2));
            break;

            case 4:
                printf("DIVIDIR\n");
                num1 = leerNumero();
                num2 = leerNumero();
                printf("Resultado: %.2f\n", ptrDividir(num1, num2));
            break;

            case 5:
                printf("Adios...\n");
            break;

            default:
                printf("Opcion invalida.\n");
            break;
        }
    }
    exit(EXIT_SUCCESS);
}