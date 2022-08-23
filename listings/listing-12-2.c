/* total bytes of an array */
// sizes will differ based on system type
#include <stdio.h>

int main()
{
    int total_byte;
    int list_int[10];

    total_byte=sizeof(int)*10;
    printf("The size of int is %d-byte long.\n", sizeof(int));
    printf("The array of 10 ints has total %d bytes.\n", total_byte);
    printf("The address of the first element: %p\n", &list_int[0]);
    printf("The address of the last element: %p\n", &list_int[9]);
    return 0;
}
