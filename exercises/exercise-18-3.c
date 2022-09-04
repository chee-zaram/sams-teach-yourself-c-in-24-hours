#include <stdio.h>

enum num{MAX_NUM=100,
	MIN_NUM=0};

int fRecur(int n);
int main(){
	int i, sum1, sum2;
	sum1=sum2=0;
	for (i=1; i<=MAX_NUM; i++)
		sum1+=i;
	printf("sum1 is equal to %d\n", sum1);
	sum2=fRecur(MIN_NUM);
	printf("sum2 is equal to %d\n", sum2);
	return 0;
}
int fRecur(int n){
	if (n > MAX_NUM)
		return 0;
	return fRecur(n+1)+n;
}

