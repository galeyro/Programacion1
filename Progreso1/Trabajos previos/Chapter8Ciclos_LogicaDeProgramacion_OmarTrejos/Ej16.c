/*Mostrar en pantalla el promedio entero de los n primeros multiplos de 3 para un numero n leido*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d%*c", &num);

    int sum = 0;

    for (int i = 1; i <= num; i++)
    {
        sum = sum + i * 3;
    }
    printf("El promedio entero de los %d  primeros multiplos de 3 es: %d", num, sum / num);
}