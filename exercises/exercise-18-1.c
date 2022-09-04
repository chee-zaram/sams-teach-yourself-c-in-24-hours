/* program to print out enumerated values */
#include <stdio.h>

int main(){
	enum tag{name1,
			 name2=10,
			 name3,
			 name4};
	int i;
	char *ptr[]={"name1",
				 "name2",
				 "name3",
				 "name4"};

	int str[] = {name1,
				 name2,
				 name3,
				 name4};

	for (i=0; i<4; i++)
		printf("The value of %s is %d\n",
				ptr[i], str[i]);
	return 0;
}


