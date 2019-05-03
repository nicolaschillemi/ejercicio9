#include <stdio.h>
#include <math.h>

void main()

{
    float valor;
    float resultado;


    printf("Ingrese el valor a elevar al cuadrado: ");
    scanf("%f",&valor);

    resultado = sqrt(valor);

    printf("El resultado es: %f",resultado);

}