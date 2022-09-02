/* program that keeps reading characters from
stdi until q is entered */
#include <stdio.h>

int main()
{
    int ch;
    printf("Enter any character (q to quit):\n");
    while (' '){
        ch = getchar();
        if (ch!='q')
            continue;
            break;
    }
    return 0;
}
