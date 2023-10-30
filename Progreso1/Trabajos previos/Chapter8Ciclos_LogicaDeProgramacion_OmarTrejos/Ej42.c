/*Determinar a cuanto es igual el promedio entero de los elementos de la serie de Fibonacci entre 0 y  1 000*/
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, temp, contador = 0, num = 0, suma = 0;
    while (num <= 1000)
    {
        suma += num;

        // printf("suma=%d\n", suma);
        contador += 1;
        // printf("%d\n", num);
        num = num2;
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
    }
    printf("El promedio entero de los elementos de la serie de Fibonacci entre 0 y 1000 es: %d/%d=%d\n", suma, contador, suma / contador);
}