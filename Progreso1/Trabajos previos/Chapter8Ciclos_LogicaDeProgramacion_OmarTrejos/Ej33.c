/*Si 32768 es el tope superior para los numeros enteros cortos, determinar cual es el numero
primo mas cercano por debajo de el*/
#include <stdio.h>
int main()
{
    int limite_max = 32768;
    int primo = 0;

    for (int num = limite_max - 1; num >= 2; num--) // Empezamos desde el límite máximo y retrocedemos
    {
        int esPrimo = 1; // Suponemos que es primo

        for (int j = 2; j * j <= num; j++)
        {
            if (num % j == 0)
            {
                esPrimo = 0;
                break; // Salimos del bucle interior si no es primo
            }
        }

        if (esPrimo)
        {
            primo = num;
            break; // Salimos del bucle exterior si encontramos un número primo
        }
    }

    if (primo != 0)
    {
        printf("El numero primo mas cercano por debajo de %d es %d\n", limite_max, primo);
    }
    else
    {
        printf("No se encontro ningun numero primo por debajo de %d\n", limite_max);
    }

    return 0;
}
