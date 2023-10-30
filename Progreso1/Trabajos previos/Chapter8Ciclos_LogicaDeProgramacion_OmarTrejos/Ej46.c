/*Leer un numero entero y calcular el promedio entero de los factoriales
de los enteros comprendidos entre 1 y el numero leido*/
#include <stdio.h>
int main()
{
    int num, numfijo, numvariable, suma = 0, contador = 0;
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
            suma += num;
            contador += 1;
            numvariable -= 1;
            num = numvariable;
        }
        printf("Suma=%d y contador=%d\n", suma, contador);
        printf("El promedio entero de los factoriales entre %d y 1 es: %d / %d = %d\n", numfijo, suma, contador, suma / contador);
    }
    else
    {
        printf("0! = 1\n");
    }
}