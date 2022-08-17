/* A program that calculates the sum of numbers and prints out the results */
#include <stdio.h>
int integer_add(int x, int y)
{
    int results;
    results = x + y;
    return results;
}

int main()
{
    int sum;
    sum = integer_add(5, 15);
    printf("The answer of the sum is %d.\n", sum);
    return 0;
}
