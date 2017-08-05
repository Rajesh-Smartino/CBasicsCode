#include <stdio.h>

int main(void) {
	int n,i,flag;
	printf(" Input : ");
	scanf("%d",&n);
	flag=0;
	if(n==1)
	{
		printf(" Neither Prime nor Composite number");
	}else if(n<0)
	{
		printf(" All Negative numbers are not Prime");
	}
	else{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf(" Composite number ");
	}
	else
	{
		printf(" Prime number");
	}
	}
	
	return 0;
}
