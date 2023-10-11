#include <stdio.h>

main() 
{
    int a, b, c;

    printf("*****PROGRAM TO PRINT GREATEST OF 3 NO.*****\n");
    printf("Enter the first number called 'a': ");
    scanf("%d", &a);
    printf("Enter the second number called 'b': ");
    scanf("%d", &b);
    printf("Enter the third number called 'c': ");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("a is greatest :D\n");
    else if (b > a && b > c)
        printf("b is greatest :D\n");
    else
        printf("c is greatest :D\n");

    return 0;
}
