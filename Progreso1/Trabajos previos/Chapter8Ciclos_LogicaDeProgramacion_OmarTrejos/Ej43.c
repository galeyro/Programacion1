/*Determinar cuantos elementos de la serie de fibonacci se encuentran entre 1 000 y 2 000*/
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, contador = 0, temp, num = 0;

    while (num <= 2000)
    {
        // printf("%d\n", num);
        temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        num = num1;
        if (num >= 1000 && num <= 2000)
        {
            contador += 1;
        }
    }
    printf("Los elementos de la serie de Fibonacci entre 1000 y 2000 son: %d", contador);
    return 0;
}