#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b){
    int suma;
    suma = a + b;
    return suma;
}

int restar(int a, int b){
    return a - b;
}

float multiplicar(float a, float b){
    return a * b;
}

float dividir(float a, float b){
    return a / b;
}

void mensaje(){
    printf("Recuerde que la división entre cero no esta definida, retorne al menu e ingrese un valor valido \n");
}

int main(int argc, char *argv[]) {

    int opcion, suma1, resta;
    float mult, div, num1, num2;

    do {

        printf("\n ********** Bienvenidos al programa Calculadora simple ********** \n");
        printf("Por favor ingrese la operacion que desea realizar\n");
        printf("1. para sumar\n");
        printf("2. para Restar\n");
        printf("3. para Multiplicar\n");
        printf("4. para dividir\n");
        printf("0. para salir de la calculadora\n");
        scanf("%d", &opcion);

        switch(opcion) {

            case 1:

                printf("Por favor ingrese el primer valor a sumar: \n");
                scanf("%f", &num1);

                printf("Por favor ingrese el segundo valor a sumar: \n");
                scanf("%f", &num2);

                suma1 = sumar(num1, num2);

                printf("El resultado de la suma es: %d \n", suma1);

                break;

            case 2:

                printf("Por favor ingrese el primer valor a restar: \n");
                scanf("%f", &num1);

                printf("Por favor ingrese el segundo valor a restar: \n");
                scanf("%f", &num2);

                resta = restar(num1, num2);

                printf("El resultado de la resta es: %d \n", resta);

                break;

            case 3:

                printf("Por favor ingrese el primer valor a multiplicar: \n");
                scanf("%f", &num1);

                printf("Por favor ingrese el segundo valor a multiplicar: \n");
                scanf("%f", &num2);

                mult = multiplicar(num1, num2);

                printf("El resultado de la multiplicacion es: %.2f \n", mult);

                break;

            case 4:

                printf("Por favor ingrese el primer valor a dividir: \n");
                scanf("%f", &num1);

                printf("Por favor ingrese el segundo valor a dividir: \n");
                scanf("%f", &num2);

                if(num2 == 0){

                    mensaje();

                }else{

                    div = dividir(num1, num2);

                    printf("El resultado de la division es: %.2f \n", div);

                }
                break;

            default:
                printf("por favor ingrese una opcion valida\n");
                break;
        }

    } while(opcion != 0);

    return 0;
}