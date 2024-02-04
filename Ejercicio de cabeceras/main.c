#include <stdio.h>
#include "sumar.h"

int main(int argc, char const *argv[])
{
    printf("Ingrese un primer valor: ");
    int a;
    scanf("%d%*c", &a);

    printf("Ingrese el segundo valor: ");
    int b;
    scanf("%d%*c", &b);

    int r = sumar(a, b); // Llamado de la función

    printf("El resultado es: %d\n", r);

    return 0;
    /*PARA COMPILAR EL ARCHIVO:

        gcc -o Operaciones .\main.c .\sumar.c

    PARA EJECUTAR EL PROGRAMA

        .\Operaciones.exe

    EN EL TERMINAL
    */
}