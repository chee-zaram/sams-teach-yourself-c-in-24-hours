/* referencing an array with a pointer */
// differ based on machine
#include <stdio.h>

int main(){
    int *ptr_int;
    int list_int[10];
    int i;

    for (i=0; i<10; i++)
        list_int[i]=i+1;
    ptr_int=list_int;
    printf("The start address of the array: %p\n", ptr_int);
    printf("The value of the first element: %d\n", *ptr_int);
    ptr_int=&list_int[0];
    printf("The address of the first element: %p\n", ptr_int);
    printf("The value of the first element: %d\n", *ptr_int);
    return 0;
}
