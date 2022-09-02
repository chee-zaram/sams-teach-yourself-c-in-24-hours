#include <stdio.h>
#include <stdarg.h>

double AddDouble(int x, ...);

int main(){
	double d1=1.1;
	double d2=2.2;
	double d3=3.3;
	double d4=4.4;

	printf("Given the variable: %2.1f,\n", d1);
	printf("The result of AddDouble() is: %2.1f.\n\n",
			AddDouble(1, d1));
	printf("Given the variables: %2.1f and %2.1f,\n", d1, d2);
	printf("The result of AddDouble() is: %2.1f.\n\n",
			AddDouble(2, d1, d2));
	printf("Given the variables: %2.1f, %2.1f and %2.1f,\n", d1, d2, d3);
	printf("The result of AddDouble() is: %2.1f.\n\n",
			AddDouble(3, d1, d2, d3));
	printf("Given the variables: %2.1f, %2.1f, %2.1f, and %2.1f,\n", d1, d2, d3, d4);
	printf("The result of AddDouble() is: %2.1f.\n\n",
			AddDouble(4, d1, d2, d3, d4));
	return 0;
}

double AddDouble(int x, ...){
	va_list arglist;
	int i;
	double argument, result=0.0;

	printf("The number of arguments is %d.\n", x);
	va_start(arglist, x);
	for (i=0; i<x; i++){
		argument=va_arg(arglist, double);
		printf("Argument passed to this function: %2.1f\n", argument);
		result+=argument;
	}
	va_end(arglist);
	return result;
}
