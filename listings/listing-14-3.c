/* using the statis specifier */
#include <stdio.h>
// add_two function
int add_two(int x, int y)
{
    static int counter=1;

    printf("This is the function call of %d,\n", counter++);
    return (x+y);
}
// main function
int main()
{
    int i, j;
    
    for (i=0, j=5; i<5; i++, j--)
        printf("the addition of %d and %d is %d.\n\n",
            i, j, add_two(i, j));
    return 0;
}
