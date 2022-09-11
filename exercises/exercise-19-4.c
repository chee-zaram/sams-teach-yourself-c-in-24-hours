#include <stdio.h>

struct haiku
{
	int start_year;
	int end_year;
	char author[16];
	char str1[32];
	char str2[32];
	char str3[32];
};

typedef struct haiku HK;

void DataDisplay(HK *ptr_s);

int main(void)
{
	HK poem[2] = {
		{
			1641,
			1716,
			"Sodo",
			"Leading me along",
			"my shadow goes back home",
			"from looking at the moon."
		},
		{
			1729,
			1781,
			"Chora",
			"A storm wind blows",
			"out from among the grasses",
			"the full moon grows."
		}
	};

	/* defining an array of pointers with HK */
	HK *ptr_poem[2] = {
		&poem[0],
		&poem[1]
	};
	int i;

	for (i = 0; i < 2; i++)
		DataDisplay(ptr_poem[i]);
	
	return (0);
}

void DataDisplay(HK *ptr_s)
{
	printf("%s\n", ptr_s->str1);
	printf("%s\n", ptr_s->str2);
	printf("%s\n", ptr_s->str3);
	printf("--- %s\n", ptr_s->author);
	printf("    %d-%d\n", ptr_s->start_year, ptr_s->end_year);
}

