/* using the switch statement */
#include <stdio.h>

int main()
{
    int day;
    printf("Enter a single digit for a day\n");
    printf("within the range of 1 to 3:\n");
    day = getchar();
    switch (day)
    {
    case '1':
        printf("Day 1\n");
    case '2':
        printf("Day 2\n");
    case '3':
        printf("Day 3\n");
    default:
        ;
    }
    return 0;
}

