/* program to print out values in both floating-point and scientific notation formats */
#include <stdio.h>

double main()
{
    double db1_num = 123.456;
    printf("The value of the db1_num in floating-point format is: %f.\n", db1_num);
    printf("The value of the db1_num in scientific notation format is: %e.\n", db1_num);
    return 0;
}
