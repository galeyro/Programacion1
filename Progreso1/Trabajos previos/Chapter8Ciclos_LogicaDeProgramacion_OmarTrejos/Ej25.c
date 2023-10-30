/*Leer un numero entero y determinar a cuanto es igual el promedio entero de sus digitos*/
#include <stdio.h>
int main()
{
    int num, num_inicial;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    num_inicial = num;
    if (num < 0)
    {
        num = -num;
    }

    int digito = 0, suma = 0, contador_digitos = 0;

    while (num > 0)
    {
        digito = num % 10;
        contador_digitos = contador_digitos + 1;
        suma = suma + digito;
        num = num / 10;
    }

    printf("El promedio entero de los digitos de %d es: %d/%d=%d", num_inicial, suma, contador_digitos, suma / contador_digitos);
}