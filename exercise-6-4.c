/* program that initializes integer variable with integer and outputs results with a given statement */
#include <stdio.h>

int main()
{
    int x;
    x = 1;
    printf("x++ produces: %d\n", x++);
    printf("Now x contains: %d\n", x);
    
    x = 1;
    printf("x = x++ produces: %d\n", x = x++);
    printf("Now x contains: %d\n", x);

    return 0;
}
