/* using the cast operator */
#include <stdio.h>
int main()
{
    int x, y;

    x = 7;
    y = 5;

    printf("Given x = %d, y = %d\n", x, y);
    printf("x / y produces: %d\n", x / y);
    printf("(float)x / y produces: %.2f\n", (float)x / y);
    return 0; 
}

