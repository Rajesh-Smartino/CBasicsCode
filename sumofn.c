#include <stdio.h>

int main(void) {
	int n,sum;
	printf("Enter n :");
	scanf("%d",&n);
	if(n>0)
	{
	sum=n*(n+1)/2;
	printf(" sum = %d",sum);
	}
	else
	{
		printf(" Enter Natural Number");
	}
}
