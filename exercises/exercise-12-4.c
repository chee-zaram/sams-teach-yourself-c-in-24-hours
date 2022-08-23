/* stopping at the null character */
#include <stdio.h>

int main()
{
    char char_array[]={
                    'I', ' ',
                    'l', 'i', 'k', 'e', ' ',
                    'C', '!', '\0'
    };
    int i;
    for (i=0; i<10; i++)
        printf("%c", char_array[i]);
    printf("\n");
    return 0;
}
