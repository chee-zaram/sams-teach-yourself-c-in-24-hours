#include <stdio.h>

int main()
{
    int i;
    char array_ch[5];

    for (i=0; i<5; i++)
        array_ch[i]='a'+i;
    for (i=0; i<5; i++)
        printf("%c ", array_ch[i]);
        printf("\n");
    return 0;
}
