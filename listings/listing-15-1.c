/* making function calls */
#include <stdio.h>

int function_1(int x, int y);
double function_2(double x, double y)
{
    printf("Within function_2.\n");
    return (x-y);
}

int main()
{
    int x1=80;
    int y1=10;
    double x2=100.123456;
    double y2=10.123456;

    printf("Pass function_1 %d and %d.\n", x1, y1);
    printf("function_1 returns %d.\n", function_1(x1, y1));
    printf("Pass function_2 %f and %f.\n", x2, y2);
    printf("function_2 returns %f.\n", function_2(x2, y2));
    return 0;
}
// function_1() definition
int function_1(int x, int y)
{
    printf("Within function_1.\n");
    return (x + y);
}
