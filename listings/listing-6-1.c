/* using arithmetic assignment operators */
#include <stdio.h>

int main()
{
    int x, y, z;

    x =1;
    y = 3;
    z = 10;
    printf("Given x = %d, y = %d, and z = %d, \n", x, y, z);

    x = x + y;
    printf("x = x + y assigns %d to x;\n", x);

    x = 1;
    x += y;
    printf("x += y assigns %d to x;\n", x);

    x = 1;
    z = z * x + y;
    printf("z = z * x + y assigns %d to z;\n", z);

    z = 10;
    z = z * (x + y);
    printf("z *= (x + y) assigns %d to z.\n", z);

    return 0;
}
