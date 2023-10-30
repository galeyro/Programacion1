/*Leer un numero entero y mostrar todos los multiplos de 5 comprendidos entre 1 y el numero leido*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d%*c", &num);

    if (num > 0)
    {
        for (int i = 1; i <= num; i++)
        {
            if (i % 5 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
    else
        printf("El numero ingresado no es positivo mayor que 0");
}