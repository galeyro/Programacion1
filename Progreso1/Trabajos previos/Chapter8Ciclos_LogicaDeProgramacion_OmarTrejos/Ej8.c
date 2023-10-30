/*Mostrar en pantalla todos los pares comprendidos entre 20 y 200*/

#include <stdio.h>
int main()
{
    for (int i = 20; i <= 200; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}