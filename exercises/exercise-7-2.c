/* exercise 7-2 */
/*
// code 1
for (i=0, j=1; i<8; i++, j++)
    printf("%d + %d = %d\n", i,j, i+j);

// code 2
for (i=0, j=1; i<8; i++, j++);
    printf("%d + %d = %d\n", i, j, i+j);

// initial output

exercise-7-2.c:3:1: error: expected identifier or ‘(’ before ‘for’
    3 | for (i=0, j=1; i<8; i++, j++)
      | ^~~
exercise-7-2.c:3:17: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<’ token
    3 | for (i=0, j=1; i<8; i++, j++)
      |                 ^
exercise-7-2.c:3:22: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘++’ token
    3 | for (i=0, j=1; i<8; i++, j++)
      |                      ^~
exercise-7-2.c:7:1: error: expected identifier or ‘(’ before ‘for’
    7 | for (i=0, j=1; i<8; i++, j++);
      | ^~~
exercise-7-2.c:7:17: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘<’ token
    7 | for (i=0, j=1; i<8; i++, j++);
      |                 ^
exercise-7-2.c:7:22: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before ‘++’ token
    7 | for (i=0, j=1; i<8; i++, j++);
      |                      ^~
exercise-7-2.c:8:12: error: expected declaration specifiers or ‘...’ before string constant
    8 |     printf("%d + %d = %d\n", i, j, i+j);
      |            ^~~~~~~~~~~~~~~~
exercise-7-2.c:8:30: error: unknown type name ‘i’
    8 |     printf("%d + %d = %d\n", i, j, i+j);
      |                              ^
exercise-7-2.c:8:33: error: unknown type name ‘j’
    8 |     printf("%d + %d = %d\n", i, j, i+j);
      |                                 ^
exercise-7-2.c:8:36: error: unknown type name ‘i’
    8 |     printf("%d + %d = %d\n", i, j, i+j);
      |                                    ^
*/

// possible solution
#include <stdio.h>
int main()
{
    int i, j;
    i = 0;
    j = 1;
    for (i=0, j=1; i<8; i++, j++)
        printf("%d + %d = %d\n", i,j, i+j);

    for (i=0, j=1; i<8; i++, j++);
        printf("%d + %d = %d\n", i, j, i+j);
}

