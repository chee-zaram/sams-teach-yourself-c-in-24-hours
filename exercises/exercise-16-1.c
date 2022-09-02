/* program to pass the string to a function that displays the string on the screen */
#include <stdio.h>

void ChString(char *ptr_str);
int main(){
	char str[]="I like C!";
	printf("The function ChString() prints:\n");
	ChString(str);
	return 0;
}

void ChString(char *ptr_str){
		printf("%s\n", ptr_str);
}

