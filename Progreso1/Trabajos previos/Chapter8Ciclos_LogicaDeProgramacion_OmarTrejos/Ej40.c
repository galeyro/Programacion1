/*Leer un numero de dos digitos y determinar si pertenece a la serie de Fibonacci*/
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 1, contador = 0, num, PerteneceSerie = 0;

    printf("Ingrese un numero de dos digitos: ");
    scanf("%d%*c", &num);

    if (num <= 99 && num >= 10)
    {
        while (contador < 100)
        {
            if (contador == num)
            {
                PerteneceSerie = 1;
                break;
            }
            contador = num1 + num2;
            num1 = num2;
            num2 = contador;
        }

        if (PerteneceSerie == 0)
        {
            printf("El numero %d no pertenece a la serie de Fibonacci", num);
        }
        else if (PerteneceSerie == 1)
        {
            printf("El numero %d si pertenece a la serie de Fibonacci", num);
        }
    }
    else
    {
        printf("El numero ingresado no es de dos digitos");
    }
    return 0;
}