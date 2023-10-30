/*Utilizando ciclos anidados, generar las siguientes parejas de enteros:

    0   1
    1   1
    2   2
    3   2
    4   3
    5   3
    6   4
    7   4
    8   5
    9   5

*/
#include <stdio.h>
int main()
{
    for (int columna1 = 0; columna1 < 10; columna1++)
    {
        printf("%d  %d\n", columna1, (columna1 + 2) / 2);
    }
    return 0;
}