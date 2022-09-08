/* pointing to a structure */
#include <stdio.h>

struct computer {
	float cost;
	int year;
	int cpu_speed;
	char cpu_type;
};

typedef struct computer SC;

char gets();
void DataReceive(SC *ptr_s);

int main(){
	SC model;

	DataReceive(&model);
	printf("Here are what you entered:\n");
	printf("Year: %d\n", model.year);
	printf("Cost: %6.2f\n", model.cost);
	printf("CPU type: %s\n", model.cpu_type);
	printf("CPU speed: %d MHz\n", model.cpu_speed);

	return 0;
}
void DataReceive(SC *ptr_s){
	printf("The type of the CPU inside the computer?\n");
		gets((*ptr_s).cpu_type);
	printf("The speed(MHz) of the CPU?\n");
		scanf("%d", &(*ptr_s).cpu_speed);
	printf("The year your computer was made?\n");
		scanf("%d", &(*ptr_s).year);
	printf("How much your computer cost?\n");
		scanf("%f", &(*ptr_s).cost);
}

