#include <stdio.h>

int x=1234;
float y=1.234567f;

void function_1(int x, float y)
{
    printf("From function_1:\n x=%d, y=%f\n", x, y);
}

int main()
{
    int x=4321;

    function_1(x, y);
    printf("Within the main block:\n x=%d, y=%f\n", x, y);
    {
        double y=7.654321;
        function_1(x, y);
        printf("Within the nested block:\n x=%d, y=%f\n", x, y);
    }
    return 0;
}
