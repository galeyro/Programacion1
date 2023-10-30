/*Leer un número entero y determinar a cuánto es igual el primero de sus dígitos*/

#include <stdio.h> //Bibliotecas

int main() // Funcion main
{
    int num; // Declara variables entera a ingresar

    // Bloque donde ingresas el numero y compruebas el numero ingresado mostrandolo en pantalla
    printf("Ingrese un numero entero: ");
    scanf("%d%*c", &num);
    printf("El numero ingresado es: %d\n\n", num);

    if (num == 0) // Condicional if si el numero es cero
    {
        printf("El primero de sus digitos es: %d", num);
    }
    else if (num > 0) // Condicional if para enteros positivos
    {

        for (int i = 1; i <= num; i *= 10) // Iteraciones for para dividir por multiplos de 10
        {
            if ((num / i >= 1) && (num / i <= 9)) // Como las variables son enteras, la división da valores enteros
                        // Por ejemplo 541/100=5.41, pero el resultado es entero, entonces 5.41=5 dando el primer digito
            {
                printf("El primero de sus digitos es: %d", num / i);
            }
        }
    }
    else if (num < 0) // Condicional if para enteros negativos
    {
        num = (-1) * num; // No pude adaptarlo para valores negativos asi que hago el truquito de hacerlo positivo y trabajar con el
        for (int j = 1; j <= num; j *= 10)
        {
            if ((num / j >= 1) && (num / j <= 9))
            {
                printf("El primero de sus digitos es: -%d", num / j); // Como converti el numero en positivo, muestro el primer digito con el
                                                                      // signo '-' antes de el para mostrar que es negativo
            }
        }
    }

    return 0;
}