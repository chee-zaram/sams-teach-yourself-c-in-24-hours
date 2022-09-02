#include <stdio.h>

void PrtStr(char prt_str[][11], int max);
int main(){
	char str[7][11]={"Sunday",
					 "Monday",
					 "Tuesday",
					 "Wednesday",
					 "Thursday",
					 "Friday",
					 "Saturday"};
	PrtStr(str, 7);
	return 0;
}
void PrtStr(char prt_str[][11], int max){
	int i;
	for (i=0; i<max; i++)
		printf("%s\n", prt_str[i]);
}

