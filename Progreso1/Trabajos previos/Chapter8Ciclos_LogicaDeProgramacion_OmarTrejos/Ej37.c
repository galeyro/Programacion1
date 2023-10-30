/*Generar todas las tablas de multiplicar del 1 al 10*/
#include <stdio.h>
int main()
{
    for (int i = 1; i < 11; i++)
    {
        printf("\nTabla del %d\n", i);
        for (int j = 0; j < 11; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}