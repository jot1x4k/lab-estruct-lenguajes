#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    int opc, i, x;
    char nombre[50];
    char apellido[50];
    char comparar1[50];
    char comparar2[50];

    do 
    {
        printf("===MENU DE OPCIONES===\n");
        printf("1. Imprimir cadena caracter por caracter\n");   
        printf("2. Usar la funcion copiar strcpy (cad1, cad2)\n");
        printf("3. Usar la funcion concatenar strcat (cad1, cad2)\n");
        printf("4. Usar la funcion comparar strcmp (cad1, cad2)\n");
        printf("5. Usar la funcion longitud strlen (cad1)\n");

        scanf("%d", &opc); 
        getchar();

        switch (opc)
        {
            case 1:
                printf("Ingrese su nombre: ");
                fgets(nombre, sizeof(nombre), stdin);
                
                for (i = 0; nombre[i] != '\0'; i++) 
                {
                    printf("Nombre[%d]: %c ", i , nombre[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Ingrese su nombre: ");
                fgets(nombre, sizeof(nombre), stdin);

                printf("El nombre guardado es: %s\n", nombre);
    
                strcpy(nombre, "Michael Jackson");
                
                printf("Nombre cambiado: %s\n", nombre);
                break;

            case 3:
                printf("Ingrese su nombre: ");
                fgets(nombre, sizeof(nombre), stdin);
                
                printf("Ingrese su apellido: ");
                fgets(apellido, sizeof(apellido), stdin);
                
                strcat(nombre, apellido);
                
                printf("Cadena concatenada: %s\n", nombre);
                break;

            case 4:
                printf("Ingrese la primera cadena: ");
                fgets(comparar1, sizeof(comparar1), stdin);

                printf("Ingrese la segunda cadena: ");
                fgets(comparar2, sizeof(comparar2), stdin);

                x = strcmp(comparar1, comparar2);

                if(x==0)
                {
                    printf("Las cadenas son iguales\n");
                }
                else
                {
                    printf("Las cadenas no son iguales\n");
                }
                break;

                case 5:
                printf("Ingrese su nombre: ");
                fgets(nombre, sizeof(nombre), stdin);

                printf("La longitud de la cadena es: %lu\n", strlen(nombre));
                break;

                default:
                printf("Opcion no valida\n");
                break;
            }       
    } while (opc != 6);

    return 0;
}