#include <stdio.h>

int MultiTwo(int x, int y){
	return (x*y);
}

int main(){
	int x=10;
	int y=20;
	printf("Given two variables %d and %d,\n", x ,y);
	printf("the product is %d", MultiTwo(x, y));
	return 0;
}

