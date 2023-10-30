/*Utilizando ciclos anidados, generar las siguientes
parejas de numeros:

    0   1
    1   1
    2   1
    3   1
    4   2
    5   2
    6   2
    7   2

*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 8; i++)
    {
        printf("%d  %d\n", i, (i + 4) / 4);
    }
    return 0;
}