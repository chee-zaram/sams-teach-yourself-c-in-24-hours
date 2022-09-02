#include <stdio.h>

int main()
{
    char str[80];
    int i, delt= 'a' - 'A';
    printf("Enter a string less than 80 characters:\n");
    gets(str);
    i=0;
    while (str[i]) {
        if ((str[i]>='A') && (str[i]<='Z'))
            str[i]+=delt;
        i++;
    }
    printf("The entered string (in lowercase) is: \n");
    puts(str);
    return 0;
}
