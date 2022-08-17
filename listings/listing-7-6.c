/* demonstrating nested loops */
#include <stdio.h>

int main()
{
    int i, j;

    for (i=1; i<=3; i++) {
        printf("The start of iteration %d of the outer loop.\n", i);
        for (j=1; j<=4; j++)
            printf("    Iteration %d of the inner loop.\n", j);
        printf("The end of iteraton %d of the outer looop.\n", i);
    }
    return 0;
}
