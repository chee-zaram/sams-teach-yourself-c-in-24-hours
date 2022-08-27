#include <stdio.h>

void PrintStr(char pstr[][15], int max);
int main(){
	char str[2][15]={"You know what,",
					"C is powerful."};
	PrintStr(str, 2);
	return 0;
}
void PrintStr(char pstr[][15], int max){
	int i;

	for (i=0; i<max; i++)
		printf("%s\n", pstr[i]);
}

