/* program to read characters from stdio
if characters are A, B, C, display their numeric values on screen */
#include <stdio.h>

int main()
{
    int x;
    printf("Enter a character:\n");
    x = getchar();
    switch (x){
        case 'A':
            printf("%d is the numerical value of A.\n", x);
            break;
        case 'B':
            printf("%d is the numerical value of B.\n", x);
            break;
        case 'C':
            printf("%d is the numerical value of C.\n", x);    
            break;
        default:
            break;
    }
    return 0;
}