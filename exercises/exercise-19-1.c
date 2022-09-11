#include <stdio.h>

struct automobile
{
	int year;
	char model[10];
	int engine_power;
	double weight;
} sedan = {
	1997,
	"New Model",
	200,
	2345.67};

int main(void)
{
	printf("Below are the info on the Sedan automobile\n");
	printf("Year: %d\n", sedan.year);
	printf("Model: %s\n", sedan.model);
	printf("Engine Power: %d\n", sedan.engine_power);
	printf("Weight: %.2f\n", sedan.weight);
	
	return (0);
}

