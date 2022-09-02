/* program to measure the total bytes taken by the array
and then print out all elements of the array */
#include <stdio.h>

int main()
{   
    int i, j;
    char list_ch[][2]={
                '1', 'a',
                '2', 'b',
                '3', 'c',
                '4', 'd',
                '5', 'e',
                '6', 'f'
    };
    printf("The total size of list_ch is %d-bytes\n", sizeof(list_ch));
    for (i=0; i<6; i++) {
        printf("\n");
        for (j=0; j<2; j++)
            printf("%c ", list_ch[i][j]);
    }
    printf("\n"); 
    return 0;
}
