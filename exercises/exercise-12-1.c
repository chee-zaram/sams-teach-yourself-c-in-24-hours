/* program to display each element of the array on the screen */
#include <stdio.h>

int main()
{
    char array_ch[5]={'A', 'B', 'C', 'D', 'E'};
    char i;
    for (i=0; i<5; i++)
        printf("%c\n", array_ch[i]);
    return 0;
}
