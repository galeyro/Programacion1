/*Leer un numero entero y mostrar todos los pares comprendidos entre 1 y
el numero leido*/

// Considerando es un numero entero positivo
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    if (num <= 0)
    {
        printf("El numero ingresado no es valido");
    }
    else if (num > 0)
    {
        int contpar = 0;
        while (num > 1)
        {

            if (num % 2 == 0)
            {
                printf("%d ", num);
            }
            num = num - 1;
        }
        printf("1");
    }
}