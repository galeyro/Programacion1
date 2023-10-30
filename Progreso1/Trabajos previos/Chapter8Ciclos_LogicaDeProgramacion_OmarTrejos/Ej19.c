/*Leer un número entero y determinar si es primo*/

#include <stdio.h> //Incluir bibliotecas

// Programa main
int main()
{
    int num; // Variable num que es el numero entero ingresado a comprobar si es primo o no

    // Ingreso del numero y muestra el numero en pantalla para confirmar que se guardo bien
    printf("Ingrese un numero entero mayor que cero: ");
    scanf("%d%*c", &num);
    printf("El numero ingresado es: %d\n", num);

    int esPrimo = 1; // Supones el numero es primo

    if (num <= 0) // Condicional if, un número menor o igual que 0 no es primo
    {
        printf("El numero ingresado no es primo");
    }
    else // Else para numeros mayores que 0
    {
        // Iteraciones for para calcular los residuos del numero
        for (int i = 2; i * i <= num; i++) // Iteramos el for con sus condiciones
        {
            if (num % i == 0) // Condicional if, si el residuo del numero con alguna iteración distinta de 1 y el num mismo, significa no es primo
            {
                esPrimo = 0; // De cumplirse, cambiamos el valor de esPrimo a 0 (falso)
                break;       // Rompemos el bucle
            }
        }
        // Mostramos el resultado para el valor booleano esPrimo, si es primo lo dice y de ser no primo lo dice
        if (esPrimo == 1) // '==' comparación directa donde esPrimo es verdadero
        {
            printf("Es primo");
        }
        else if (esPrimo == 0)
        {
            printf("No es primo"); //'==' comparación directa donde esPrimo es falso
        }
    }

    return 0;
}