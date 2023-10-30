/*Determinar a cuanto es igual la suma de los elementos de la serie de Fibonacci entre 0 y 100*/
#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 1, contador = 0, suma = 0;

    while (contador <= 100)
    {
        suma += contador;
        int temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        contador = num1;
    }

    printf("La suma de los elementos de la serie de Fibonacci entre 0 y 100 es: %d\n", suma);

    return 0;
}