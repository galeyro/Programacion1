/*Leer un numero entero y determinar a cuanto es igual la suma de todos los enteros comprendidos entre 1 y el numero leido*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d%*c", &num);

    if (num <= 0)
        printf("Numero no valido");
    else
    {
        int cont = 0;
        for (int i = 1; i <= num; i++)
        {
            cont = cont + i;
        }
        printf("La suma de todos los enteros comprendidos entre 1 y %d es: %d", num, cont);
    }
}