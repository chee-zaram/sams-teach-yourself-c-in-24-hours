/* printing out an array of characters */
#include <stdio.h>

int main()
{
    char array_ch[7]={'H', 'e', 'l', 'l', 'o', '!', '\0'};
    int i;

    for (i=0; i<7; i++)
        printf("array ch[%d] contains: %c\n", i, array_ch[i]);
    /*--- method I ---*/
    printf("Put all elements together(Method I):\n");
    for (i=0; array_ch[i]!='\0' && i<7; i++)
        printf("%c", array_ch[i]);
    /*--- method II --- */
    printf("\nPut all elements together(Method II):\n");
    printf("%s\n", array_ch);

    return 0;
}
