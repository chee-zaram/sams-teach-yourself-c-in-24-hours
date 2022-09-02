/* program to updae the value of a double variable using a double pointer */
#include <stdio.h>

int main()
{
    double flt_num, *ptr_flt_num;
    flt_num=123.45;
    printf("flt_num inititally %5.2f\n", flt_num);
    ptr_flt_num=&flt_num;
    printf("ptr_flt_num points to %5.2f\n", *ptr_flt_num);
    *ptr_flt_num=543.21;
    printf("ptr_flt_num updated to %5.2f\n", *ptr_flt_num);
    printf("Updated flt_num now %5.2f\n", flt_num);
    return 0;
}
