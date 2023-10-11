#include <stdio.h>

main() 
{
    int a, b;
    printf("******PROGRAM TO PRINT GREATEST OF 2 NO.******\n");
    printf("Enter the first number called 'a': ");
    scanf("%d", &a);
    printf("Enter the second number called 'b': ");
    scanf("%d", &b);

    if (a > b)
        printf("a is greater\n");
    else if (b > a)
        printf("b is greater\n");
    else
        printf("Both numbers are equal\n");

    return 0;
}
