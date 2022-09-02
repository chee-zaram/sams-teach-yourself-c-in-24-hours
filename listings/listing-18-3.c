/* using typedef definitions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum constants{ITEM_NUM=3,
			   DELT='a'-'A'};
typedef char *STRING[ITEM_NUM];
typedef char *PTR_STR;
typedef char CHAR;
typedef int INTEGER;

void Convert2Upper(PTR_STR str1, PTR_STR str2);
int main(){
	STRING str;
	STRING moon={"Whatever we wear",
				 "we become beautiful",
				 "moon viewing!"};
	INTEGER i;
	INTEGER term=0;

	for (i=0; i<ITEM_NUM; i++){
		str[i]=malloc((strlen(moon[i])+1)*sizeof(CHAR));
		if (str[i]==NULL){
			printf("malloc() failed.\n");
			term=1;
			i=ITEM_NUM;
		}
		Convert2Upper(moon[i], str[i]);
		printf("%s\n", moon[i]);
	}
	for (i=0; i<ITEM_NUM; i++){
		printf("\n%s", str[i]);
		free (str[i]);
	}
	printf("\n");
	return term;
}
/* function definition */
void Convert2Upper(PTR_STR str1, PTR_STR str2){
	INTEGER i;

	for (i=0; str1[i]; i++){
		if ((str1[i]>='a') && (str1[i]<='z'))
			str2[i]=str1[i]-DELT;
		else
			str2[i]=str1[i];
	}
	str2[i]='\0';
}

