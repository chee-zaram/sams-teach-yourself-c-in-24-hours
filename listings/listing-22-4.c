/* redirecting a standard stream */
#include <stdio.h>

enum {SUCCESS, FAIL,
	STR_NUM = 4};

void StrPrint(char **str);
int ErrorMsg(char *str);

int main(void)
{
	char *str[STR_NUM] = {
		"Be bent, and you will remain straight.",
		"Be vacant, and you will remain full.",
		"Be worn, and you will remain new.",
		"--- by Lao Tzu"};
	char filename[] = "LaoTzu.txt";
	int reval = SUCCESS;

	StrPrint(str);
	if (freopen(filename, "w", stdout) == NULL){
		reval = ErrorMsg(filename);
	} else {
		StrPrint(str);
		fclose(stdout);
	}
	return (reval);
}

void StrPrint(char **str)
{
	int i;

	for (i = 0; i < STR_NUM; i++)
		printf("%s\n", str[i]);
}

int ErrorMsg(char *str)
{
	printf("Cannot open %s.\n", str);
	return (FAIL);
}

