/* aliging numbers on the left edge of screen */
#include <stdio.h>

float main()
{
    float num1, num2;
    num1 = 123;
    num2 = 123.456;
    printf("Number 1 is: %-3.0f\n", num1);
    printf("Number 2 is: %-7.3f\n", num2);
    return 0;
}
