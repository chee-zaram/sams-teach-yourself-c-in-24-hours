#include <stdio.h>
#include <string.h>

int main()
{
    char char_array[]={'E', 'l',
                       'e', 'm', 'e', 'n', 't', 's', '\0'};
    int i;
    for (i=0; char_array[i] && i!='\0'; i++)
        strlen(char_array);
    printf("The length of the string without the null character is: %d\n", strlen(char_array));
    return 0;
}
