/*Leer dos numeros enteros y determinar a cuanto es igual el producto mutuo del primer digito de cada uno*/
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Ingrese dos numeros enteros separados por un espacio: ");
    scanf("%d %d%*c", &num1, &num2);

    int digit1 = num1, digit2 = num2;

    while (digit1 >= 10)
    {
        digit1 = digit1 / 10;
        // printf("num1=%d\n", digit1);
    }

    while (digit2 >= 10)
    {
        digit2 = digit2 / 10;
        // printf("num2=%d\n", digit2);
    }

    printf("El producto mutuo del primer digito de cada uno es: %d * %d = %d\n", digit1, digit2, digit1 * digit2);
    return 0;
}