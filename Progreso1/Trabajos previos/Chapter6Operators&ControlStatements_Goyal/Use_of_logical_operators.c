#include <stdio.h>

main() 
{
    int x = 12;

    if (x >= 10 && x <= 12) {
        x = x + 10;
    }

    printf("%d", x);

    return 0;
}
