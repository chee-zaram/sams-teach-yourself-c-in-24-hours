/* specifying minimum field width */
#include <stdio.h>

int main()
{
    int num1, num2;

    num1 = 12;
    num2 = 12345;
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%5d\n", num1);
    printf("%05d\n", num1);
    printf("%2d\n", num2);
    return 0;
}

