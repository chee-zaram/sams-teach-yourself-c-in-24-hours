/* Reading and writing binary data */
#include <stdio.h>

enum {SUCCESS, FAIL, MAX_NUM = 3};

void DataWrite(FILE *fout);
void DataRead(FILE *fin);
int ErrorMsg(char *str);

int main(void)
{
	FILE *fptr;
	char filename[] = "double.bin";
	int reval = SUCCESS;

	if ((fptr = fopen(filename, "wb+")) == NULL)
	{
		reval = ErrorMsg(filename);
	} else {
		DataWrite(fptr);
		rewind(fptr); /* reset fptr file position indicator */
		DataRead(fptr);
		fclose(fptr);
	}

	return (reval);
}

void DataWrite(FILE *fout)
{
	int i;
	double buff[MAX_NUM] = {
		123.45,
		567.89,
		100.11};
	printf("The size of buff: %d-byte\n", (int)sizeof(buff));
	for (i = 0; i < MAX_NUM; i++){
		printf("%5.2f\n", buff[i]);
		fwrite(&buff[i], sizeof(double), 1, fout);
	}
}

void DataRead(FILE *fin)
{
	int i;
	double x;

	printf("\nRead back from the binary file:\n");
	for (i = 0; i < MAX_NUM; i++){
		fread(&x, sizeof(double), (size_t)1, fin);
		printf("%5.2f\n", x);
	}
}

int ErrorMsg(char *str)
{
	printf("Cannot open %s.\n", str);
	return (FAIL);
}

