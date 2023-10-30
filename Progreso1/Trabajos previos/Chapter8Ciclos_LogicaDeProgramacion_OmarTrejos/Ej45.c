/*Leer un numero y calcularle el factorial a todos los enteros comprendidos entre 1 y el numero leido*/
#include <stdio.h>
int main()
{
    int num, numfijo, numvariable;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    if (num < 0)
    {
        num = -num;
    }
    numfijo = num;
    numvariable = num;

    if (num != 0)
    {
        while (numvariable >= 1)
        {
            for (int i = num - 1; i >= 1; i--)
            {
                num = num * i; // 5*4
            }
            printf("%d! = %d\n", numvariable, num);
            numvariable -= 1;
            num = numvariable;
        }
    }
    else
    {
        printf("0! = 1\n");
    }
}