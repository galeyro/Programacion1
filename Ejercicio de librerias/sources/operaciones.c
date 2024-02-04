#include "../libs/operaciones.h"

int sumar(int a, int b)
{
    return a + b;
}

int restar(int a, int b)
{
    return a - b;
}

int multiplicar(int a, int b)
{
    return a * b;
}

int dividir(int a, int b)
{
    if (b == 0)
    {
        return 0; // La division por cero es indeterminada
    }
    else
    {
        return a / b;
    }
}