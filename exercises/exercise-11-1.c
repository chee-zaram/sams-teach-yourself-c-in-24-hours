/* program to print out the left and right values of int variables */
#include <stdio.h>

int main()
{
    int x, y, z;
    x=512;
    y=1024;
    z=2048;
    printf("x has a left value of %p and right value of %d\n", &x, x);
    printf("y has a left value of %p and right value of %d\n", &y, y);
    printf("z has a left value of %p and right value of %d\n", &z, z);
    return 0;
}
