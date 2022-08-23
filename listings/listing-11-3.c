/* changing values via pointers */
#include <stdio.h>

int main()
{
    char c, *ptr_c;

    c='A';
    printf("c: address=%p, content=%c\n", &c, c);
    ptr_c=&c;
        printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
        printf("*ptr_c => %c\n", *ptr_c);
    *ptr_c='B';
        printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
        printf("*ptr_c => %c\n", *ptr_c);
    printf("c: address=%p, content=%c\n", &c, c);
    return 0;
}
