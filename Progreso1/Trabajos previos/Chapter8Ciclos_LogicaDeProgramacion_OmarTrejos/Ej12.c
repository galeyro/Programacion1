/*Leer un numero entero de 3 digitos y determinar si tiene el digito 1*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero de 3 digitos: ");
    scanf("%d%*c", &num);

    if (num < 100 || num > 999)
    {
        printf("El numero ingresado no es de 3 digitos");
    }
    else
    {
        int dig1, dig2, dig3;
        dig1 = num / 100;
        dig2 = (num / 10) % 10;
        dig3 = (num % 100) % 10;

        if (dig1 == 1 || dig2 == 1 || dig3 == 1)
        {
            printf("Si tiene el digito 1");
        }
        else
        {
            printf("No tiene el digito 1");
        }
    }
}