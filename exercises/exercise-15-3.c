#include <stdio.h>
#include <stdarg.h>

int MultiInt(int x, ...);

int main(){
	int d1=12.1;
	int d2=13.2;
	int d3=14.3;
	int d4=15.4;

	printf("Given a variable %d,\n", d1);
	printf("The product returned by MultiInt() is %d\n\n",
			MultiInt(1, d1));
	printf("Given variables %d and %d,\n", d1, d2);
	printf("The product returned by MultiInt() is %d\n\n",
			MultiInt(2, d1, d2));
	printf("Given variables %d, %d, and %d,\n", d1, d2, d3);
	printf("The product returned by MultiInt() is %d\n\n",
			MultiInt(3, d1, d2, d3));
	printf("Given variables %d, %d, %d, and %d,\n", d1, d2, d3, d4);
	printf("The product returned by MultiInt() is %d\n\n",
			MultiInt(4, d1, d2, d3, d4));
	return 0;
}

int MultiInt(int x, ...){
	va_list arglist;
	int i;
	int result=1;
	
	printf("The number of arguments is %d\n", x);
	va_start(arglist, x);
	for (i=0; i<x; i++)
		result*=va_arg(arglist, int);
	va_end(arglist);
	return result;
}
