/* scopes in nested block */
#include <stdio.h>

int main()
{
    int i=32;
    printf("Within the outer block: i=%d\n", i);
    {
        int i, j;
        printf("Within the inner block: \n");
        for (i=0, j=10; i<=10; i++, j--)
            printf("i=%2d, j=%2d\n", i, j);
    }
    printf("Within the outer block: i=%d\n", i);
    return 0;
}
