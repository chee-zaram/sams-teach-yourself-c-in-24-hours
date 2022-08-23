#include <stdio.h>

int main()
{
    double list_data[6]={
            1.12345,
            2.12345,
            3.12345,
            4.12345,
            5.12345
    };

    /* method I */
    printf("Using method I, size of list_data is %d.\n", sizeof(double)*6);
    /* method II */
    printf("With method II, size of list_data is %d.\n", sizeof(list_data));
    return 0;
}
