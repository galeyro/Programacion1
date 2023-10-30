/*Leer numeros hasta que digiten 0 y determinar a cuanto es igual el promedio de los numeros terminados en 5*/
#include <stdio.h>
int main()
{
    int num = 0, contador = 0, sumade5 = 0;
    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d%*c", &num);
        if (num % 10 == 5)
        {
            sumade5 += num;
            contador += 1;
        }
    } while (num != 0);
    printf("El promedio de los numeros terminados en 5 es: %d/%d=%d", sumade5, contador, sumade5 / contador);
    return 0;
}
