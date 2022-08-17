/* program to read in characters entered by the user and write character to the screen */
#include <stdio.h>

int main()
{
    int ch;
    printf("Enter any character of your choosing:\n");
    ch = getchar( );
    printf("The numerical equivalent of ");
    putchar(ch);
    printf(" is %d.\n", ch);
    return 0;
}
