/*Utilizando ciclos anidados, genera la siguiente terna de numeros:

    1   1   1
    2   1   2
    3   1   3
    4   2   1
    5   2   2
    6   2   3
    7   3   1
    8   3   2
    9   3   3

*/

#include <stdio.h>//bibliotecas

int main()//funcion main
{
    int i, j, k;//variables enteras que representan cada columna

    for (int i = 1; i < 10; i++) //iteracion que es la base para la estructura del codigo a partir de la primera columna
    {
        if ((i > 0) && (i <= 3)) //condicional para la segunda columna
        {
            j = 1;

            //condicionales para la tercera columna
            if (i == 1) 
            {
                k = 1;
            }
            else if (i == 2)
            {
                k = 2;
            }
            else if (i == 3)
            {
                k = 3;
            }
        }
        else if ((i > 3) && (i <= 6)) //condicional para la segunda columna
        {
            j = 2;

            //condicionales para la tercera columna
            if (i == 4)
            {
                k = 1;
            }
            else if (i == 5)
            {
                k = 2;
            }
            else if (i == 6)
            {
                k = 3;
            }
        }
        else if ((i > 6) && (i <= 9)) //condicional para la segunda columna
        {
            j = 3;

            //condicionales para la tercera columna
            if (i == 7)
            {
                k = 1;
            }
            else if (i == 8)
            {
                k = 2;
            }
            else if (i == 9)
            {
                k = 3;
            }
        }

        printf("%d\t%d\t%d\n", i, j, k); //Mostrar el resultado de cada fila y va cambiando en cada iteracion del primer for
    }
    return 0;
}