/* program to keep looping until K is entered */
#include <stdio.h>

int main()
{
    int inp;
    printf("Enter a character or 'K' to exit:\n");
    inp = ' ';
    while (inp != 'K') {
        inp = getchar( );
        putchar(inp); 
    }
    printf("\nOut of the while loop.\n");
    return 0;
}
