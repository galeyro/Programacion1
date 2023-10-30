/*Leer un numero entero de dos digitos y mostrar en pantalla todos los enteros comprendidos entre un digito y otro*/
#include <stdio.h>
int main()
{
    int num;
    printf("Ingrese un numero entero de dos digitos: ");
    scanf("%d%*c", &num);
    if (num < 10 || num > 99)
    {
        printf("El numero ingresado no es de dos digitos");
        return 1;
    }
    else
    {
        int dig1 = num / 10;
        int dig2 = num % 10;

        if (dig2 < dig1)
        {
            int temp = dig1;
            dig1 = dig2;
            dig2 = temp;
        }
        printf("Los enteros comprendidos entre el digito (%d) y el digito (%d) son: \n", dig1, dig2);
        for (int i = dig1; i <= dig2; i++)
        {
            printf("%d ", i);
        }
    }
}