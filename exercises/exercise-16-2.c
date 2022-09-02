#include <stdio.h>

void ChString(char *ptr_str);
int main(){
	char str[]="I like C!";
	char *ptr_str;

	printf("Before change of str[]:\n");
	ChString(str);
	ptr_str=str;
	*(ptr_str+2)='l';
	*(ptr_str+3)='o';
	*(ptr_str+4)='v';
	*(ptr_str+5)='e';

	printf("After the change of str[]:\n");
	ChString(str);
	return 0;
}
void ChString(char *ptr_str){
	printf("%s\n", ptr_str);
}

