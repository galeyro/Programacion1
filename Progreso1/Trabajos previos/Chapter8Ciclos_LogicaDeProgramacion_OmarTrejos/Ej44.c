/*Leer un numero y calcular su factorial*/
#include <stdio.h>
int main()
{
    int num, numfijo;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    if (num < 0)
    {
        num = -num;
    }
    numfijo = num;

    if (num != 0)
    {
        for (int i = num - 1; i >= 1; i--)
        {
            num = num * i; // 5*4
        }
        printf("%d! = %d", numfijo, num);
    }
    else
    {
        printf("0! = 1\n");
    }
}
