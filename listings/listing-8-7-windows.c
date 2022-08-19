/* using the ?: operator */
#include <stdio.h>

int main()
{
    int x;

    x = sizeof(int);
    printf("%s\n",
        (x == 2)
        ? "The int data type has 2 bytes."
        : "int doesn't have 2 bytes."); // this will be false on Linux because it is double the size
    printf("The maximum value of int is: %d\n",
        (x != 2) ? ~(1 << x * 8 - 1) : ~(1 << 15) );
    return 0;
}
