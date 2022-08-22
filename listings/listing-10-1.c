/* using the if statement */
#include <stdio.h>

int main()
{
    int i;

    printf("Integers that can be divided by both 2 and 3\n");
    printf("(within the range of 0 to 100):\n");
    for (i=0; i<=100; i++) {
        if ((i%2 == 0) && (i%3 == 0))
            printf("    %d\n", i);
    }
    return 0;
}
