/* using while loop */
#include <stdio.h>

int main()
{
    int c;
    c = ' ';
    printf("Enter a character: \n(enter x to exit)\n");
    while (c != 'x') {
        c = getchar();
        putchar(c);
    }
    printf("\nOut of the while loop. Bye!\n");
    return 0;
}
    