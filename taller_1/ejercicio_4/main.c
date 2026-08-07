#include <stdio.h>
#include <stdlib.h>

void suma(int prm_num1, int prm_num2) 
{
    printf("Suma: %d + %d = %d\n", prm_num1, prm_num2, prm_num1 + prm_num2);
}

void resta(int prm_num1, int prm_num2) 
{
    printf("Resta: %d - %d = %d\n", prm_num1, prm_num2, prm_num1 - prm_num2);
}

void multiplicacion(int prm_num1, int prm_num2) 
{
    printf("Multiplicación: %d * %d = %d\n", prm_num1, prm_num2, prm_num1 * prm_num2);
}

void division(int prm_num1, int prm_num2) 
{
    if (prm_num2 == 0) 
    {
        printf("El divisor es cero, no se puede dividir.\n");
    } else {
        printf("División: %d / %d = %f\n", prm_num1, prm_num2, (float)prm_num1/prm_num2);
    }
}

int main(int argc, char *argv[]) 
{
    int num1, num2;

    printf("===Operaciones con funciones===\n");

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    printf("Resultado de las operaciones: \n");
    
    suma(num1, num2);
    resta(num1, num2);
    multiplicacion(num1, num2);
    division(num1, num2);

    return 0;
}