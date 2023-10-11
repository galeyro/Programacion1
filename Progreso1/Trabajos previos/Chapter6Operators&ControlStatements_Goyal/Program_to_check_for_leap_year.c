#include <stdio.h>

void main() 
{
    int n;
    printf("****PROGRAM TO CHECK FOR LEAP YEAR****\n");
    printf("Enter the value of the year: ");
    scanf("%d", &n);

    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
}
