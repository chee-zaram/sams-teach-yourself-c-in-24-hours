/* using the if-else statement */
#include <stdio.h>

int main()
{
    int i;

    printf("Even number   Odd number\n");
    for (i=0; i<10; i++)
        if (i%2 == 0)
            printf("%d", i);
        else
            printf("%14d\n", i);
    return 0;
}
