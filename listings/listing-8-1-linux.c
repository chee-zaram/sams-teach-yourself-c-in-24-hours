/* using the sizeof operator */
#include <stdio.h>

int main()
{
    char ch= ' ';
    int int_num = 0;
    float flt_num = 0.0f;
    double dbl_num = 0.0;

    printf("The size of char is: %lu-byte\n", sizeof(char));
    printf("The size of ch is: %lu-byte\n", sizeof ch);
    printf("The size of int is: %lu-byte\n", sizeof(int)); // this will give 4 as int is 32-bit on Linux
    printf("The size of int_num is: %lu-byte\n", sizeof int_num); // also will give 4 as opposed to 2 on Windows
    printf("The size of float is: %lu-byte\n", sizeof(float));
    printf("The size of flt_num is: %lu-byte\n", sizeof flt_num);
    printf("The size of double is: %lu-byte\n", sizeof(double));
    printf("The size of dbl_num is: %lu-byte\n", sizeof dbl_num);
    return 0;
}
