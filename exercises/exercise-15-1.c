#include <stdio.h>
#include <time.h>

void GetDateTime(void);
int main(){
	printf("Before the function call.\n");
	GetDateTime();
	printf("After the function call.\n");
	return 0;
}

void GetDateTime(void){
	time_t now;
	int i;
	char *str;
	printf("From within GetDateTime().\n");
	time(&now);
	str=asctime(localtime(&now));
	printf("The local time and date is:\n");
	for (i=0; str[i]; i++)
		printf("%c", str[i]);
}

