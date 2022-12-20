#include <stdio.h>

int main()
{
    int numero = 36;
    long numero2 = 24;
    char caracter = '2';
    float num1 = 21.254;
    double num2 = 24.21;
    bool id = 0;

    printf("El tamaño de la variable numero es %d bytes", sizeof(numero));
    printf("El tamaño de la variable numero2 es %d bytes", sizeof(numero2));
    printf("El tamaño de la variable caracter es %d bytes", sizeof(caracter));
    printf("El tamaño de la variable num1 es %d bytes", sizeof(num1));
    printf("El tamaño de la variable num2 es %d bytes", sizeof(num2));
    printf("El tamaño de la variable id es %d bytes", sizeof(id));
}
