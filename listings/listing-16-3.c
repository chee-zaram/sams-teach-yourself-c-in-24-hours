/* accessing arrays via pointers */
#include <stdio.h>

int main(){
	char str[]="It's a string!";
	char *ptr_str;
	int list[]={1, 2, 3, 4, 5};
	int *ptr_int;

	/* access char array*/
	ptr_str=str;
	printf("Before the change, str contains: %s\n", str);
	printf("Before the change, str[5] contains: %c\n", str[5]);
	*(ptr_str+5)='A';
	printf("After the change, str[5] contains: %c\n", str[5]);
	printf("After the change, str contains: %s\n", str);
	/* access int array */
	ptr_int=list;
	printf("Before the change, list[2] contains: %d\n", list[2]);
	*(ptr_int+2)=-3;
	printf("After the change, list[2] contains: %d\n", list[2]);

	return 0;
}

