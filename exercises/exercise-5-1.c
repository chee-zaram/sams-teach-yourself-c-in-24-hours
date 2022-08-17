/* program to put characters together on the screen */
#include <stdio.h>

char main()
{
    char a, b, c;
    a = 'B';
    b = 'y';
    c = 'e';
    printf("%c, %c, %c", a, b, c);
    return 0;
}

// funny and correct
// but does not take into account the knowledge from the chapter
/*char main()
{
    printf("B, y, e");
    return 0;
}
*/
