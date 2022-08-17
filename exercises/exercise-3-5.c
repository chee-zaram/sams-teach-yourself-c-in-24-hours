/* fuction to calculate the multiplication of intergers and return a result*/
#include <stdio.h>

int interger_mul(int x, int y)
{
    int mul;
    mul = x * y;
    return mul;
}
/* funtion with digits to calculate*/
int main()
{
    int result;
    result = interger_mul(3, 5);
    printf("The answer to this multiplication is %d.\n", result);
    return 0;
}
