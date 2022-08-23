/* using the continue statement*/
#include <stdio.h>

int main()
{
    int i, sum;

    sum = 0;
    for (i=1; i<8; i++){
        if ((i==3) || (i==5))
            continue;
            sum += i;
    }
    printf("The sum of 1, 2, 4, 6, and 7 is: %d\n", sum);
    return 0;
}
