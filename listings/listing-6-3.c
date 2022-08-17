/* using relational operators */
#include <stdio.h>

int main()
{
    int x, y;
    double z;

    x = 7;
    y = 25;
    z = 24.46;
    printf("Given x = %d, y = %d, and z = %.2f,\n", x, y, z);
    printf("x >= y produces:        %d\n", x >= y);
    printf("x == y produces:        %d\n", x == y);
    printf("x < z produces:         %d\n", x < z);
    printf("y > z produces:         %d\n", y > z);
    printf("x != y - 18 produces:   %d\n", x != y - 18);
    printf("x + y != z produces:    %d\n", x + y != z);
    return 0;
}
