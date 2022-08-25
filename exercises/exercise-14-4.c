#include <stdio.h>
// the commented out code was my initial understanding of the question
// just thought to leave it here
/*
int add_two(int x, int y)
{
    static int counter = 1;

    printf("This is the function call of %d,\n", counter++);
    return (x+y);
}
int minus_two(int x, int y)
{
    return (x-y);
}
int main()
{
    int i, j;

    for (i=0, j=5; i<5; i++, j--)
        printf("the addition of %d and %d is %d,\nas well as subtraction of %d from %d being %d.\n\n",
            i, j, add_two(i, j), j, i, minus_two(i, j));
    return 0;
}
*/

int add_two(int x, int y)
{
    static int counter=1;
    static int sum=0;

    printf("This is the function call of %d,\n", counter++);
    printf("the previous value of sum is %d,\n", sum);
    sum=x+y;
    return sum;
}
int main()
{
    int i, j;
    for (i=0, j=5; i<5; i++, j--)
        printf("the addition of %d and %d is %d.\n\n",
            i, j, add_two(i, j));
    return 0;
}
