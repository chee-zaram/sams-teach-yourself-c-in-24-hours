/* program to update the value of ch to decimal 66 using a pointer */
#include <stdio.h>

int main()
{
    char ch, *ptr_ch;
    ch='A';
    printf("char ch right value is %c\n", ch);
    ptr_ch=&ch;
    printf("ptr_ch points to %c\n", *ptr_ch);
    *ptr_ch=66;
    printf("Right value of *ptr_ch now made %c\n", *ptr_ch);
    printf("ch now updated to %c\n", ch);
    return 0;
}
