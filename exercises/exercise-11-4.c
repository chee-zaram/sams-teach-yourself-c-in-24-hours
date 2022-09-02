/* program to calculate the multiplication x and y
and print the result, which is saved in x,
all in the way of indirection */
#include <stdio.h>

int main()
{
    int x, y, *ptr_x, *ptr_y;
    x=5;
    y=6;
    printf("Given the initital values of x=%d and y=%d\n", x, y);
    ptr_x=&x;
    ptr_y=&y;
    printf("ptr_x points to the right value of x: %d\n", *ptr_x);
    printf("ptr_y points to the right value of y: %d\n", *ptr_y);
    *ptr_x *= *ptr_y;
    printf("Mulitiplying the values of *ptr_x and *ptr_y, and saving it in *ptr_x\n");
    printf("therefore makes x=%d\n", x);
    return 0;
}
