#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
    float a, b, c, x1, x2;
 
    printf("Program to find the roots of quadratic equations.");
    printf("\nEnter the coefficient of x*x: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x: ");
    scanf("%f", &b);
    printf("Enter the constant value: ");
    scanf("%f", &c);

    float discriminant = (b * b) - (4 * a * c);
    
    if (discriminant < 0)
    {
        printf("Imaginary roots.");
    }
    else
    {
        float squareRoot = sqrt(discriminant);
        x1 = (-b + squareRoot) / (2 * a);
        printf("The first root: %f", x1);
        x2 = (-b - squareRoot) / (2 * a);
        printf("\nThe second root: %f", x2);
    }
    getch();
}
