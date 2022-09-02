/* program that prints sum of number from 1 to 7
skipping those that can be evenly divided by 2 and 3 */
#include <stdio.h>

int main()
{
    int i, sum;

    sum=0;
    for (i=0; i<8; i++) {
        if ((i%2==0) && (i%3==0))
            continue;
            sum += i;
    }
    printf("The sum of 1, 2, 3, 4, 5, and 7 is %d\n", sum);
    return 0;
}
