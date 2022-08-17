/* multiple expressions */
#include <stdio.h>

int main()
{
    int i, j;
    for (i=0, j=8; i!=j; i++, j--)
        printf("%d + %d = %d\n", i, j, i+j);
    return 0;
}
