/* another example of multiple expressions */
#include <stdio.h>

int main()
{
    int i, j;
    for (i=0, j=1; i<8; i++, j++)
        printf("%d - %d = %d\n", j, i, j - i);
    return 0;
}
