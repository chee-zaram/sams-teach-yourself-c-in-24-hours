#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
		if (argc<2){
			printf("Usage is .exe, argument1, argument2...argument-n\n");
			printf("Re-enter the command-line arguments\n");
		}
		else{
			printf("The arguments entered are \n");
			for (i=0; i<argc; i++)
				printf("%s ", argv[i]);
			printf(".\n");
		}
	return 0;
}

