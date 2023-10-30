/*Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio entero de
los numeros primos leidos*/
#include <stdio.h>
int main()
{
    int num = 0, suma = 0, contador = 0;

    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d%*c", &num);
        int esPrimo = 1; // dices es primo
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                esPrimo = 0;
                break;
            }
        }
        
        if (esPrimo == 1 && num!=0)
        {
            suma = suma + num;
            contador += 1;
        }
        printf("%d, contador=%d\n", esPrimo, contador);
    } while (num != 0);
    printf("El promedio entero de los %d numeros primos leidos es: %d/%d=%d", contador, suma, contador, suma / contador);
}