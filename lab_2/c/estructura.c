#include <stdio.h>
#include <stdlib.h>

struct estudiante
{
    char nombre[50];
    int edad;
    char sexo[50];
    float promedio;
};


int main(int argc, char *argv[])
{
    struct estudiante alumno;

    printf("Ingrese el nombre del estudiante: \n");
    scanf("%s", &alumno.nombre);

    printf("Ingrese la edad del estudiante: \n");
    scanf("%d", &alumno.edad);

    printf("Ingrese sexo del estudiante: \n");
    scanf("%s", &alumno.sexo);

    printf("Ingrese el promedio del estudiante: \n");
    scanf("%f", &alumno.promedio);

    printf("Nombre: %s | Edad: %d | Sexo: %s | Promedio: %.2f\n", alumno.nombre, alumno.edad, alumno.sexo, alumno.promedio);

    exit(EXIT_SUCCESS);
}