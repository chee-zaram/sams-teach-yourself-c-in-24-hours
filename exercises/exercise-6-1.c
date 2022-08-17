/* program to print out the result of expressions */
#include <stdio.h>

int main()
{
    int x, y, z;
    x = 1;
    y = 3;
    printf("Given x = %d and y = %d;\n", x, y);
    printf("The result of x += y is %d,\n", x += y);
    
    x = 1;
    y = 3;
    x += -y;
    printf("The result of x += -y is %d,\n", x);
    
    x = 1;
    y = 3;
    x -= y;
    printf("Th result of x -= y is %d,\n", x);
    
    x = 1;
    y = 3;
    x -= -y;
    printf("The result of x -= -y is %d,\n", x);
    
    x = 1;
    y = 3;
    x *= y;
    printf("The result of x *= y is %d,\n", x);
    
    x = 1;
    y = 3;
    x *= -y;
    printf("The result of x *= -y is %d.\n", x);
    
    return 0;
}
