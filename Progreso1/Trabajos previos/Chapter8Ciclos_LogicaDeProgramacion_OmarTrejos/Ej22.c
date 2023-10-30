/*Leer un numero entero y determinar cuantas veces tiene el digito 1*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    int numfijo = num;
    if (num < 0)
    {
        num = -num;
    }
    int contador = 0;
    while (num > 0)
    {
        int digito = num % 10;
        if (digito == 1)
        {
            contador = contador + 1;
        }
        num = num / 10;
    }
    printf("El numero %d tiene %d veces el digito 1\n", numfijo, contador);
}