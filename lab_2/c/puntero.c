#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = 10;
    int* ptr = &x;

    printf("El valor de x es: %d\n", x);
    printf("La direccion donde se guardo el valor de x es: %p\n", ptr);
    printf("La direccion del puntero es: %p\n", &ptr);
    printf("El valor al que apunta el puntero es: %d\n", *ptr);

    *ptr = 20;

    printf("El valor del nuevo numero es: %d\n", x);

    exit(EXIT_SUCCESS);
}