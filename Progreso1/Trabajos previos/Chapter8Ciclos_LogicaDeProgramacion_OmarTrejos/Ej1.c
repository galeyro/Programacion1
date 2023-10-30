/*Leer un numero entero y mostrar todos los enteros
comprendidos entre 1 y el numero leido*/

#include <stdio.h>
int main()
{
    int num, cont, num1;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    if (num > 0) // positivo
    {
        cont = num - 1;
        num1 = num;
        while (num1 >= 1)
        {
            printf("%d ", num - cont);
            cont = cont - 1;
            num1 = num1 - 1;
        }
    }
    else if (num < 0) // negativo
    {
        num1 = num;
        cont = num;
        while (num1 <= 1)
        {
            printf("%d ", num - cont + 1);
            cont = cont + 1;
            num1 = num1 + 1;
        }
    }
    else if (num == 0)
    {
        printf("0 1");
    }
}