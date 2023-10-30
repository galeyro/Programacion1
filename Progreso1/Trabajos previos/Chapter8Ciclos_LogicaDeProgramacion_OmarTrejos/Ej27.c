/*Leer dos numeros enteros y determinar cual tiene mayor cantidad de digitos*/
#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0;
    printf("Ingrese dos numeros enteros separados por un espacio: ");
    scanf("%d %d%*c", &num1, &num2);

    int digito1 = 0, digito2 = 0;

    while (num1 > 0)
    {
        digito1 = digito1 + 1;
        num1 = num1 / 10;
    }

    while (num2 > 0)
    {
        digito2 = digito2 + 1;
        num2 = num2 / 10;
    }

    if (digito1 == digito2)
    {
        printf("Ambos tienen los mismo digitos, %d digitos\n", digito1);
    }
    else if (digito1 > digito2)
    {
        printf("El primero numero tiene mas digitos que el segundo");
    }
    else if (digito1 < digito2)
    {
        printf("El segundo numero tiene mas digitos que el primero");
    }
    return 0;
}