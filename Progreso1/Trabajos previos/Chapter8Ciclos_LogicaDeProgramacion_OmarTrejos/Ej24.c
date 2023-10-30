/*Leer un numero entero y determinar a cuanto es igual la suma de sus digitos pares*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    if (num < 0)
    {
        num = -num;
    }

    int digito = 0, suma = 0;

    while (num > 0)
    {
        digito = num % 10;
        if (digito % 2 == 0)
        {
            suma = suma + digito;
            printf("Digito par: %d\n", digito);
        }
        num = num / 10;
    }

    printf("La suma de los digitos es: %d", suma);
    return 0;
}