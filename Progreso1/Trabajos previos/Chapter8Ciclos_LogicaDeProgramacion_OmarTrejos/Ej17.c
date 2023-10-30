/*Promediar los x primeros multiplos de 2 y determinar si ese promedio es mayor que los y primeros multiplos
de 5 para valores de x e y leidos*/

#include <stdio.h>
int main()
{
    int x, y;
    int sumx = 0, sumy = 0;

    printf("Ingrese un numero entero para calcular los x primeros multiplos de 2: ");
    scanf("%d%*c", &x);
    printf("Ingrese un numero entero para calcular los y primeros multiplos de 5: ");
    scanf("%d%*c", &y);

    for (int i = 1; i <= x; i++)
    {
        sumx = sumx + i * 2;
    }

    for (int j = 1; j <= y; j++)
    {
        sumy = sumy + j * 5;
    }

    printf("El promedio para los %d multiplos de 2 ingresados es: %d\n", x, sumx / x);
    printf("El promedio para los %d multiplos de 5 ingresados es: %d\n", y, sumy / y);

    if (sumx / x > sumy / y)
    {
        printf("El promedio para los %d multiplos de 2 es mayor que el promedio para los %d multiplos de 5\n", x, y);
    }
    else if (sumx / x < sumy / y)
    {
        printf("El promedio para los %d multiplos de 5 es mayor que el promedio para los %d multiplos de 2\n", y, x);
    }
    else if (sumx / x == sumy / y)
    {
        printf("El promedio para ambos son iguales");
    }
}