/* program to display negative integers in hex format along with their signed int equivalents */
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a negative integer: \n");
    scanf("%d", &x);
    printf("The hex format of the signed int %d is 0x%X.\n", x, x);
    return 0;
}
