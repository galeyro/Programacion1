/*Leer un numero entero y determinar cuantos digitos tiene*/
#include <stdio.h>
int main()
{
    int num;
    int contador = 0;
    printf("Ingresar un numero entero: ");
    scanf("%d%*c", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        num /= 10;
        contador++;
    }

    printf("El numero tiene %d digitos\n", contador);
}