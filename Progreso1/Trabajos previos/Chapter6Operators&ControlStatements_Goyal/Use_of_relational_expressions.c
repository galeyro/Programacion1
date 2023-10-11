#include <stdio.h>

int main() 
{
    int x;
    x = (7 == 7); /* Evalúa a 1 */
    printf("\na = (7 == 7)\n\ta = %d", x);
    x = (7 != 7); /* Evalúa a 0 */
    printf("\na = (7 != 7)\n\ta = %d", x);
    x = (12 == 12) + (7 != 1); /* Evalúa a 1 + 1 */
    printf("\na = (12 == 12) + (7 != 1)\n\ta = %d\n", x);

    return 0;
}
