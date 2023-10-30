/*Escribir en pantalla el resultado de sumar los primeros 20 multiplos de 3*/
#include <stdio.h>
int main()
{
    int num = 3;
    int sum = 0;
    for (int i = 1; i <= 20; i++)
    {
        // printf("Multiplo numero %d es:\t %d\n", i, num * i);
        sum = sum + num * i;
    }
    printf("El resultado de sumar los primeros 20 multiplos de 3 es: %d", sum);
}