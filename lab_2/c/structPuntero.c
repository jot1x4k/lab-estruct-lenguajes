#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct estudiante{

    char nombre[50];
    int edad;
    float promedio;
};

int main(int argc, char *argv[]) {

    struct estudiante e1;

    printf("Por favor ingrese el nombre del estudiante \n");
    scanf("%s", &e1.nombre);

    printf("Por favor ingrese la edad del estudiante \n");
    scanf("%d", &e1.edad);

    printf("Por favor ingrese el promedio del estudiante \n");
    scanf("%f", &e1.promedio);

    struct estudiante *ptr = &e1;

    printf("El nombre es: %s \n ", ptr -> nombre);
    printf("La edad es: %d \n ", ptr -> edad);
    printf("El promedio es: %.2f \n ", ptr -> promedio);

    ptr -> edad = 21;
    strcpy(ptr->nombre, "Laura");
    ptr -> promedio = 4.6;

    printf("El nombre es: %s \n ", e1.nombre);
    printf("La edad es: %d \n ", e1.edad);
    printf("El promedio es: %.2f \n ", e1.promedio);

    return 0;
}