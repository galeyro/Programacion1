/*Leer un numero entero de tres digitos y mostrar todos los enteros
comprendidos entre 1 y cada uno de los digitos*/

#include <stdio.h>

int main()
{
    int num;

    printf("Introduce un numero entero de tres digitos: ");
    scanf("%d", &num);

    if (num < 100 || num > 999)
    {
        printf("El número no tiene tres dígitos. Debe ser un número de tres dígitos.\n");
        return 1;
    }

    int digito1 = num / 100;       // Obtener el primer dígito
    int digito2 = (num / 10) % 10; // Obtener el segundo dígito
    int digito3 = num % 10;        // Obtener el tercer dígito

    // Mostrar enteros comprendidos entre 1 y cada dígito
    printf("Enteros comprendidos entre 1 y el primer digito (%d):\n", digito1);
    for (int i = 1; i <= digito1; i++)
    {
        printf("%d ", i);
    }

    printf("\nEnteros comprendidos entre 1 y el segundo digito (%d):\n", digito2);
    for (int i = 1; i <= digito2; i++)
    {
        printf("%d ", i);
    }

    printf("\nEnteros comprendidos entre 1 y el tercer digito (%d):\n", digito3);
    for (int i = 1; i <= digito3; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}