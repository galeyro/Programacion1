/*Leer un numero entero y mostrar todos sus componentes numericos, o sea, aquellos
para quienes él sea un múltiplo*/
#include <stdio.h>
int main()
{
    int num = 0, contador = 0;
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("Es multiplo de %d\n", i);
            contador += 1;
        }
    }
    printf("El numero %d es multiplo de %d numeros\n", num, contador);
}
