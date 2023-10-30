/*Se define la serie de Fibonacci como la serie que comienza con los dígitos 1 y 0 y va sumando progresivamente
los dos ultimos elementos de la serie, así:

    0   1   1   2   3   5   8   13  21  34  ...

Utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el número 10 000
*/

#include <stdio.h> //bibliotecas

int main() // funcion main
{

    printf("SERIE DE FIBONACCI!!!\n\n");

    int cont0 = 0, cont1 = 1; // declaracion de variables iniciales que serviran de contadores
    int resul=0;                // variable que manejamos como resultado para ir contanto el resultado

    printf("%d\n%d\n", cont0, cont1); // mostramos los dos primeros números que empiezan la serie

    // bloque de iteracion while que para cuando resultado sobrepasa el numero 10 000
    while (resul <= 10000)
    {
        resul = cont0 + cont1; // guardamos el valor de la suma de los dos terminos anteriores en resultado
        printf("%d\n", resul); // mostramos el valor de resultado
        cont0 = cont1;         // reescribimos el valor del contador 0
        cont1 = resul;         // reescribimos el valor del contador 1
    }

    printf("\n\nFIN");
    return 0;
}
