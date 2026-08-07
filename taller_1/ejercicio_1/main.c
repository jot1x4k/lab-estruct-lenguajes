#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num1, num2;

    printf("Ingrese el primer número: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número: ");
    scanf("%d", &num2);
    
    printf("Resultado de las operaciones: \n");
    printf("Suma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Resta: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicacion: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 == 0) {
        printf ("El divisor es cero, no se puede dividir.\n");
    } else {
        printf("Division: %d / %d = %f\n", num1, num2, (float)num1/num2);
    }

    return 0;
}