#include <stdio.h>

int main()
{
    int i;

    for (i=0; i<5; i++){
        int x=0;
        static int y=0;
        printf("x=%d, y=%d\n", x++, y++);
    }
    return 0;
}
