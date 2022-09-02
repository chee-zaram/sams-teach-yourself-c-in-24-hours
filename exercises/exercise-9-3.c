/* program to multiply two signed int variables with positive values, and display the result as a long int*/
#include <stdio.h>

int main()
{
    int x, y;
    long int z;
    printf("Enter a value: \n");
    scanf("%u", &x);
    printf("Enter another value: \n");
    scanf("%u", &y);
    z = x * y;
    printf("The multiplication yields: %lu\n", z);
    return 0;
}
