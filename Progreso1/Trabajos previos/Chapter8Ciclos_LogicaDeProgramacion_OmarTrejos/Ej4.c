/*Leer dos numeros y mostrar todos los enteros comprendidos entre ellos*/

#include <stdio.h>
int main()
{
    int num1, num2;
    int cont;
    printf("Ingrese dos numeros enteros separados por un espacio (num_espacio_num): ");
    scanf("%d %d%*c", &num1, &num2);

    if (num1 == num2)
    {
        printf("Los dos numeros son iguales, no hay enteros comprendidos entre ellos");
    }
    else if (num1 < num2)
    {
        cont = num1;
        while (cont <= num2)
        {
            printf("%d ", cont);
            cont = cont + 1;
        }
    }
    else if (num1 > num2)
    {
        cont = num2;
        while (cont <= num1)
        {
            printf("%d ", cont);
            cont = cont + 1;
        }
    }
}