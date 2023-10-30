/*Mostrar en pantalla la tabla de multiplicar del numero 5*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 11; i++)
    {
        printf("5 * %d = %d\n", i, i * 5);
    }
    return 0;
}