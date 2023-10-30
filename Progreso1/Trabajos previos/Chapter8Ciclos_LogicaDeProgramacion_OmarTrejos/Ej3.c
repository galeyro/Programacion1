/*Leer un numero entero y mostrar todos los divisores exactos del numero
comprendidos entre 1 y el numero leido*/

// Suponiendo que el numero es positivo
#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Ingrese un numero entero posito: ");
    scanf("%d%*c", &num);
    printf("Sus divisores exactos son:\n");

    while (i <= num)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        i = i + 1;
    }
}