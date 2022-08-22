/* program to calculate the sine and tangent values of a 30 degree angle */
#include <stdio.h>
#include <math.h>

int main()
{
    float x, result;
    x = 30.00;
    result *= 3.14/180.0;
    printf("The sine value of 30 is: %f.\n", sin(result));
    printf("The tangent value of 30 is %f.\n", tan(result));
    return 0;
}
