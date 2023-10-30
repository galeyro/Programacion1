/*Mostrar en pantalla todos los números terminados en 6
comprendidos entre 25 y 205*/

#include <stdio.h> //Bibliotecas
int main()         // Programa main
{
    // Declaración de variables
    int variacion = 10;
    int num = 26;

    // Iteraciones while para mostrar los numeros saltando 10
    while ((num >= 25) && (num <= 205)) // Defines los límites del while con una conjunción &&
    {
        printf("%d\n", num);   // Mostrar el numero
        num = num + variacion; // Hacer el cambio y sobreescribir
    }

    return 0;
}