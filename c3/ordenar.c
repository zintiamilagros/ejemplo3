#include <stdio.h>

void burbuja(int arreglo[],int longitud);
void intercambiar(int*a, int*b);

int main(void)
{
    printf("origen de este archivo es c3");
    printf("\n");
    printf("programa para ordenar datos en un arrehglo");
    printf("\n");
    int num_ordenar[] = {30,25,12,34,-4,-53,56,200,43,28};

    //obtener datos del arreglo

    int longitud_arreglo_bytes = sizeof(num_ordenar);
    int longitud_elemento = sizeof(num_ordenar[0]);
    int longitud_arreglo = longitud_arreglo_bytes/longitud_elemento;

    printf("Datos del arreglo sin ordenar : ");
    for(int i = 0; i < longitud_arreglo; i++)
    {
        printf("%d ",num_ordenar[i]);
    }
    printf("\n");

    burbuja(num_ordenar, longitud_arreglo);
    printf("arreglo ordenado");
    printf("\n");
    printf("datos ordenados en el arreglo: ");
    for(int i = 0; i < longitud_arreglo; i++)
    {
        printf("%d ",num_ordenar[i]);
    }
    printf("\n");
    printf("fin del programa");
    printf("\n");
}

void burbuja(int arreglo[],int longitud)
{
    printf("\n");
    printf("inicio del procedimiento de ordenamiento");
    for(int j = 0; j < longitud; j++)
    {
        for(int k = 0; k < longitud-j-1; k++)
        {
           if(arreglo[k] < arreglo[k+1])
           {
                intercambiar(&arreglo[k],&arreglo[k+1]);
           }
        }
    }
    printf("\n");
    printf("fin del procedimiento de ordenamiento");
    printf("\n");

}


void intercambiar(int* a, int* b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
}