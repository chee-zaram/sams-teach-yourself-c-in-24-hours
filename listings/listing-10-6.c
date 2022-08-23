/* breaking an infinite loop */
#include <stdio.h>

int main()
{
    int c;
    
    printf("Enter a character:\n(enter x to exit)\n");
    while (' ') {
        c = getc(stdin);
        if (c == 'x')
            break;
    }
    printf("Break the infinite while loop. Bye!\n");
    return 0;
}
