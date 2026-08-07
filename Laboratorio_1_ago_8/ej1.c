#include <stdio.h>
#include <stdlib.h>

#define CONS_PI 3.14159

int main (int argc, char *argv[]) {
    int entero = 23;
    float flotante = 3.45;
    double doble = 3.456789;
    char caracter = 'C';
    char cadena[] = "Hola Mundo";
    short enteroCorto = 32000;
    long enteroLargo = 100000;
    long long enteroMuyLargo = 10000000000;

    const int CONS_ENTERA = 10;
    const float CON_FLOTANTE = 9.81;
    const char CONS_CARACTER = 'C';
    const char CONS_CADECANA[] = "Constante de cadena";
    const short CONS_ENTERO_CORTO = 32000;
    const long CONS_ENTERO_LARGO = 100000;
    const long long CONS_ENTERO_MUY_LARGO = 10000000000;

    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Doble: %.6f\n", doble);
    printf("Caracter: %c\n", caracter);
    printf("Cadena: %s\n", cadena);
    printf("Entero corto: %d\n", enteroCorto);
    printf("Entero largo: %ld\n", enteroLargo);
    printf("Entero muy largo: %lld\n", enteroMuyLargo);

    printf("Constante entera: %d\n", CONS_ENTERA);
    printf("Constante flotante: %.2f\n", CON_FLOTANTE);
    printf("Constante caracter: %c\n", CONS_CARACTER);
    printf("Constante cadena: %s\n", CONS_CADECANA);
    printf("Constante entero corto: %d\n", CONS_ENTERO_CORTO);
    printf("Constante entero largo: %ld\n", CONS_ENTERO_LARGO);
    printf("Constante entero muy largo: %lld\n", CONS_ENTERO_MUY_LARGO);

    printf("Constante PI: %.5f\n", CONS_PI);

    return 0;
}