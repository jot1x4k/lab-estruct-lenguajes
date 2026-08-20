/**
 * @file 
 * @brief sistema de gestion de estudiantes, usando punteros, punteros a funciones, estructuras y memoria dinamica
 * @author Juan Jose Rodriguez Prada <juanrodriguezkq@unicauca.edu.co>
 * @copyright MIT License
 */

#define MAX 10
int NUM_EST = 0;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

/**
 * @brief Registra una estructura Estudiante en un arreglo de estudiantes
 * @param id ID del Estudiante
 * @param nombre Nombre del Estudiante
 * @param edad Edad del Estudiante
 * @param promedio Promedio del estudiante
 * @param arr Arreglo de Estudiantes
 * @return Puntero a la estructura Estudiante creada
 */
Estudiante* registrarEstudiante(int id, char* nombre, int edad, float promedio, Estudiante arr[MAX])
{
    Estudiante* nuevo = (Estudiante*) malloc(sizeof(Estudiante));
    nuevo -> id = id;
    strcpy((nuevo -> nombre), nombre);
    nuevo -> edad = edad;
    nuevo -> promedio = promedio;
    return nuevo;
}

/**
 * @brief Muestra todos los elementos de un arreglo de estructura Estudiantes
 * @param es Puntero al arreglo de estudiantes
 * @param longitud Longitud maxima del arreglo de Estudiantes
 */
void mostrarEstudiantes(Estudiante* es, int longitud)
{
    for(int i=0; i < longitud; i++)
    {
        printf("ID: %d | Nombre: %s | Edad: %d | Promedio: %.2f\n", (es+i)->id, (es+i)->nombre, (es+i)->edad, (es+i)->promedio);
    }
}

/**
 * @brief Busca un elemento en un arreglo de estructura Estudiantes que conincida con el identificador
 * @param id ID de la estructura Estudiante a buscar
 * @param es Puntero al arreglo de Estudiantes
 * @return 0 si no se encontro la estructura Estudiante, o si no hay elementos en el arreglo. 1 si efectivamente se encontro una estructura que coincida con el ID
 */
int buscarEstudiante(int id, int longitud, Estudiante* es)
{
    if(NUM_EST == 0)
    {   
        printf("No hay registros de estudiantes actualmente\n");
        return 0;
    }
    for(int i=0; i < longitud; i++)
    {
        if(((es+i)->id) == id)
        {
            printf("Estudiante encontrado! \n");
            printf("ID: %d | Nombre: %s | Edad: %d | Promedio: %.2f\n", (es+i)->id, (es+i)->nombre, (es+i)->edad, (es+i)->promedio);
            return 1;
        }
    }
    printf("No se encontro el estudiante con id %d.\n", id);
    return 0;
}

/**
 * @brief Modifica los valores de una estructura Estudiante mediante punteros
 * @param id ID de la estructura Estudiante a buscar
 * @param es Puntero al arreglo de Estudiantes
 */
void modificarEstudiante(int id, Estudiante* es)
{
    char nombre[50];
    int edad;
    float promedio;

    char buffer[100];

    strcpy(nombre, (es->nombre));
    edad = es -> edad;
    promedio = es -> promedio;

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

    strcpy((es -> nombre), nombre);
    es -> edad = edad;
    es -> promedio = promedio;
}


/**
 * @brief Limpia el buffer de lectura
 */
void limpiarBuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main()
{   
    Estudiante arrEst[MAX];
    Estudiante *pArr = NULL;
    int opcion = 0, edad = 0, id = 0;
    float promedio = 0;
    char nombre[50];

    Estudiante* (*ptrRegistrar)(int, char*, int, float, Estudiante*) = registrarEstudiante;
    void (*ptrMostrar)(Estudiante*, int) = mostrarEstudiantes;
    int (*ptrBuscar)(int, int, Estudiante*) = buscarEstudiante;
    void (*ptrModificar)(int, Estudiante*) = modificarEstudiante;


    while (opcion != 5)
    {
        printf("===GESTION DE ESTUDIANTES===\n");
        printf("1. Registrar nuevo estudiante\n");
        printf("2. Ver listado de estudiantes\n");
        printf("3. Buscar estudiante por ID\n");
        printf("4. Modificar estudiante\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: \n");
        scanf("%d", &opcion);
        limpiarBuffer();

        switch (opcion)
        {
            case 1:
                printf("Registrar nuevo estudiante\n");
                if (NUM_EST >= MAX)
                {
                    printf("Se ha alcanzado el numero maximo de estudiantes. Elimine algun estudiante para registrar uno nuevo\n");
                    break;
                }

                printf("ID: \n");
                scanf("%d", &id);
                limpiarBuffer();
                if(ptrBuscar(id, MAX, pArr) == 1) { printf("Ya existe un estudiante con este ID.\n"); break; }

                printf("Nombre: \n");
                scanf("%49s", nombre);
                limpiarBuffer();

                printf("Edad: \n");
                scanf("%d", &edad);
                limpiarBuffer();

                printf("Promedio: \n");
                scanf("%f", &promedio);
                limpiarBuffer();

                pArr = realloc(pArr, (NUM_EST + 1) * sizeof(Estudiante));

                pArr[NUM_EST] = *(ptrRegistrar(id, nombre, edad, promedio, arrEst));
                NUM_EST = NUM_EST +1;

                break;

            case 2:
                printf("Listado de estudiantes registrados\n");
                if (NUM_EST == 0)
                {
                    printf("No hay estudiantes registrados.\n");
                    break;
                }
                ptrMostrar(pArr, NUM_EST);
                break;

            case 3:
                printf("Busca estudiante por ID\n");
                printf("Ingrese el ID: \n");
                scanf("%d", &id);
                ptrBuscar(id, MAX, pArr);
                
            break;

            case 4:
                printf("Modificar estudiante por ID\n");
                printf("Ingrese el ID: \n");
                scanf("%d", &id);
                limpiarBuffer();
                if(ptrBuscar(id, MAX, pArr) == 1) { ptrModificar(id, pArr); break; }
            break;

            case 5:
                printf("Adios...\n");
            break;

            default:
                printf("Opcion invalida.\n");
            break;
        }
    }

    free(pArr);
    exit(EXIT_SUCCESS);
}