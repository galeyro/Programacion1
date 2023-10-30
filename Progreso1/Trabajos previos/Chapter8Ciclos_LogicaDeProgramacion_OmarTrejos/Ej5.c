/*Leer dos numeros y mostrar todos los enteros terminados en 4 comprendidos entre ellos*/
#include <stdio.h>

int main()
{
    int num1, num2;
    int cont;
    printf("Ingrese dos numeros enteros separados por un espacio (num_espacio_num): ");
    scanf("%d %d%*c", &num1, &num2);

    if (num1 > num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Los enteros terminados en 4 entre %d y %d son:\n", num1, num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 10 == 4) // Asi compruebas cual número termina en 4
        {
            printf("%d\n", i);
        }
    }

    return 0;
}