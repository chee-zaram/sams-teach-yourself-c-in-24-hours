#include <stdio.h>

int main()
{
    int x;
    printf("Enter a character: \n(q to exit)\n");
    for (x=' '; (x != 'q') ? 1 : 0; )
        x = getchar();
    printf("You entered 'q', goodbye.\n");
    return 0;
}
