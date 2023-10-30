/*Leer un numero entero y mostrar en pantalla su tabla de multiplicar*/
#include <stdio.h>
int main()
{
    int num = 0;

    printf("Ingrese el numero entero para mostrar su tabla de multiplicar: ");
    scanf("%d%*c", &num);

    for (int i = 0; i < 11; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}