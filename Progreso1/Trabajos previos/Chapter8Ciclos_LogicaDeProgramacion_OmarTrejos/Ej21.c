/*Leer un numero entero y determinar a cuanto es igual la suma de sus digitos*/
#include <stdio.h>
int main()
{
    int num, suma = 0;
    int digito;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        digito = num % 10;    // Obtiene el ultimo digito de la unidad
        suma = suma + digito; // Agrega el ultimo digito a la suma
        num = num / 10;       // Elimina el ultimo digito
    }
    printf("La suma de los digitos es: %d", suma);
}