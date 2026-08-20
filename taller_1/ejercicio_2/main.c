#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int num;

    printf("===Uso de estructuras condicionales===\n");

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if(num%2==0) {
        printf("El numero %d es par\n", num);
    } else {
        printf("El numero %d es impar\n", num);
    }
    
    switch ((num > 0) - (num < 0)) {
        case 1:
            printf("Ademas, el numero ingresado es positivo.\n");
            break;
        
        case -1:
            printf("Ademas, el numero ingresado es negativo.\n");
            break;

        case 0:
            printf("El numero ingresado es cero.\n");
            break;
    }
    return 0;
}