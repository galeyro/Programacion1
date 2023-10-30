/*Leer un numero entero y determinar si la suma de sus digitos es tambien un numero primo*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese el numero entero: ");
    scanf("%d%*c", &num);

    if (num < 0)
    {
        num = -num;
    }

    int digito, suma = 0;
    while (num > 0)
    {
        digito = num % 10;
        suma = suma + digito;
        num = num / 10;
    }
    printf("La suma de sus digitos es: %d\n", suma);

    int esPrimo = 1; // es primo
    for (int i = 2; i < suma; i++)
    {
        if (suma % i == 0)
        {
            esPrimo = 0;
        }
    }

    if (esPrimo == 0)
    {
        printf("%d no es primo", suma);
    }
    else if (esPrimo == 1)
    {
        printf("%d es primo", suma);
    }
}