/**
 * @file
 * @brief Definicion y uso de funciones basicas mediante punteros para modificar una estructura
 * @author Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>
 * @copyright MIT License
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

/**
 * @brief Imprime en consola los datos de la estructura Estudiante mediante punteros
 * @param es Puntero a una estructura Estudiante
 */
void imprimirEstudiante(const Estudiante *es) 
{
    printf("Nombre: %s | Edad: %d | Promedio: %.2f\n", es->nombre, es->edad, es->promedio);
}

/**
 * @brief Modifica los valores de una estructura Estudiante mediante punteros
 * @param ptrEs Puntero a una estructura Estudiante
 */
void modificarEstudiante(Estudiante *ptrEs)
{
    char nombre[50];
    int edad;
    float promedio;

    char buffer[100];

    strcpy(nombre, (ptrEs->nombre));
    edad = ptrEs -> edad;
    promedio = ptrEs -> promedio;

    printf("Modifique el nombre del estudiante (Vacio para no alterar):\n");
    if(fgets(buffer, sizeof(buffer), stdin)) 
    { 
        if (buffer[0] != '\n')
        {
            buffer[strcspn(buffer, "\n")] = '\0';
            strcpy(nombre, buffer);
        }
        buffer[0] = '\0';
    }

    printf("Modifique la edad del estudiate (Vacio para no alterar): \n");
    if(fgets(buffer, sizeof(buffer), stdin)) 
    { 
        if (buffer[0] != '\n')
        {
            edad = (int)strtol(buffer, '\0', 10);
        }
        buffer[0] = '\0';
    }

    printf("Modifique el promedio del estudiate (Vacio para no alterar): \n");
    if(fgets(buffer, sizeof(buffer), stdin)) 
    { 
        if (buffer[0] != '\n')
        {
            promedio = strtof(buffer, '\0');
        }
        buffer[0] = '\0';
    }

    strcpy((ptrEs -> nombre), nombre);
    ptrEs -> edad = edad;
    ptrEs -> promedio = promedio;
}

int main()
{
    Estudiante es1 = 
    {
        "Juan",
        18,
        4.2
    };

    modificarEstudiante(&es1);
    imprimirEstudiante(&es1);

    exit(EXIT_SUCCESS);
}
