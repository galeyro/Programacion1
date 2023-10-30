/*Leer 2 numeros enteros y determinar cual de los dos tiene mayor cantidad de digitos primos*/
#include <stdio.h>
int main()
{
    int num1 = 67890, num2 = 12345, num1fijo = 0, num2fijo = 0;
    printf("Ingrese dos numeros enteros separados por un espacio: ");
    scanf("%d %d", &num1, &num2);

    num1fijo = num1;
    num2fijo = num2;

    if (num1 < 0)
    {
        num1 = -num1;
    }
    if (num2 < 0)
    {
        num2 = -num2;
    }

    int digito1 = 0, digito2 = 0;         // contador de digito para analizar si es primo o no
    int cont_primo1 = 0, cont_primo2 = 0; // contador de numeros primos que suma 1 si el digito es primo

    while (num1 > 0)
    {
        digito1 = num1 % 10;
        if (digito1 == 1 || digito1 == 2 || digito1 == 3 || digito1 == 5 || digito1 == 7) // Considerando que 0 no es primo
        {
            cont_primo1 = cont_primo1 + 1;
        }
        num1 = num1 / 10;
    }

    while (num2 > 0)
    {
        digito2 = num2 % 10;
        if (digito2 == 1 || digito2 == 2 || digito2 == 3 || digito2 == 5 || digito2 == 7) // Considerando que 0 no es primo
        {
            cont_primo2 = cont_primo2 + 1;
        }
        num2 = num2 / 10;
    }
    printf("%d tiene %d digitos primos, y %d tiene %d digitos primos\n", num1fijo, cont_primo1, num2fijo, cont_primo2);
    if (cont_primo1 < cont_primo2)
    {
        printf("El primer numero tiene menor cantidad de digitos primos\n");
    }
    else if (cont_primo1 > cont_primo2)
    {
        printf("El primer numero tiene mayor cantidad de digitos primos\n");
    }
    else if (cont_primo1 == cont_primo2)
    {
        printf("Ambos numeros tienen igual cantidad de digitos primos\n");
    }
    return 0;
}