/* passing a structure to a function */
#include <stdio.h>
char gets();
struct computer {
	float cost;
	int year;
	int cpu_speed;
	char cpu_type[16];
};

/* create synonym */
typedef struct computer SC;

/* function declaration */
SC DataReceive(SC s);

int main(){
	SC model;

	model=DataReceive(model);
	printf("Here are what you entered:\n");
	printf("Year: %d\n", model.year);
	printf("Cost: $%6.2f\n", model.cost);
	printf("CPU type: %s\n", model.cpu_type);
	printf("CPU speed: %d MHz\n", model.cpu_speed);

	return 0;
}
/* function definition */
SC DataReceive(SC s){
	printf("The type of the CPU inside your computer?\n");
		gets(s.cpu_type);
	printf("The speed(MHz) of the CPU?\n");
		scanf("%d", &s.cpu_speed);
	printf("The year your computer was made?\n");
		scanf("%d", &s.year);
	printf("How much your computer cost?\n");
		scanf("%f", &s.cost);
	return s;
}

