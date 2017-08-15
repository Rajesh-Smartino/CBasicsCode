#include <stdio.h>

int main(void) {
	int n,t,a,b,d=0;
	int temp;
	printf(" Number ");
	scanf("%d",&n);
	a=n;
	do
	{
	while(a>0)
	{
		b=a%10;
		a=a/10;
		d=d+(b*b);
	}
	a=d;
	d=0;
	printf("%d ",a);
	}while(a>10);
	if(a==1)
	{
	printf("\nSince it ends with %d, Given number is Happy ",a);
	}else
	{
		printf("\n Not a Happy number");
	}
	return 0;
}
