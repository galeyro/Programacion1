#include <stdio.h>

void main()
{
    int n;
    printf("****PROGRAM TO CHECK THAT A GIVEN NO. IS EVEN OR ODD****");
    printf("\nPlease enter the value of n: ");
    scanf("%d", &n);
    
    if (n % 2 == 0)
        printf("Number is even");
    else
        printf("Number is odd");
}
