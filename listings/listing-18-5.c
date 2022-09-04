/* command-line arguments */
#include <stdio.h>

int main(int argc, char *argv[]){
	int i;

	printf("The value received by argc is %d.\n", argc);
	printf("There are %d command-line arguments passed to main().\n",
			argc);
	if(argc){
		printf("The first command-line argument is: %s\n", argv[0]);
		printf("The rest of the command-line arguments are:\n");
		for (i=1; i<argc; i++)
			printf("%s\n", argv[i]);
	}
	return 0;
}
	
