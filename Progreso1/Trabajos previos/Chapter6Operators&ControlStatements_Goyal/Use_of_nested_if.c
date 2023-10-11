#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    printf("Please enter the value of n: ");
    scanf("%d", &n);
    
    if (n == 1)
        printf("Monday");
    else if (n == 2)
        printf("Tuesday");
    else if (n == 3)
        printf("Wednesday");
    else if (n == 4)
        printf("Thursday");
    else if (n == 5)
        printf("Friday");
    else if (n == 6)
        printf("Saturday");
    else if (n == 7)
        printf("Sunday");
    else
        printf("Please enter a value between 1 and 7");
    getch();
}
