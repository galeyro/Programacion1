#include <stdio.h>
#include "../libs/operaciones.h"

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Ingrese dos numeros enteros separados por un espacio (num_espacio_num): ");
    scanf("%d %d%*c", &a, &b);

    printf("El resultado de la suma es: %d\n", sumar(a,b));
    printf("El resultado de la resta es: %d\n", restar(a,b));
    printf("El resultado de la multiplicacion es: %d\n", multiplicar(a,b));
    printf("El resultado de la division es: %d\n", dividir(a,b));
    return 0;
}
