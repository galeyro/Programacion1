/*Mostrar en pantalla los primeros 20 multiplos de 3*/
#include <stdio.h>
int main()
{
    int num = 3;
    for (int i = 1; i <= 20; i++)
    {
        printf("Multiplo numero %d es:\t %d\n", i, num * i);
    }
}