/* using signed and unsigned modifiers*/
#include <stdio.h>

int main()
{
    signed char ch;
    int x;
    unsigned int y;

    ch = 0xFF;
    x = 0xFFFF;
    y = 0xFFFFu;
    printf("The decimal of signed 0xFF is %d\n", ch);
    printf("The decimal of signed 0xFFFF is %d\n", x); // will differ based on width of data type on system
    printf("The decimal of unsigned 0xFFFF is %u\n", y);
    printf("The hex of decimal 12345 is 0x%X\n", 12345);
    printf("The hex of decimal -12345 is 0x%X\n", -12345);// will differ depending on width of date type on system
    return 0;
}
