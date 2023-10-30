/*Leer dos numeros enteros y mostrar todos los multiplos de 5 comprendidos entre el menor y el mayor*/
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Ingrese dos numeros enteros separados por un espacio (num_espacio_num): ");
    scanf("%d %d", &num1, &num2);

    if (num2 < num1)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    for (int i = num1; i <= num2; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d\n", i);
        }
    }
}