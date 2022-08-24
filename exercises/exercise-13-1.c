/* program to copy the string from str1 to str2 */
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[]="This is Exercise 1.";
    char str2[50];

    strcpy(str2, str1);
    printf("%s\n", str2);
    return 0;
}
