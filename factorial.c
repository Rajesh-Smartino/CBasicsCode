#include<stdio.h>
int main()
{
	int fact,i,n;
	printf("Enter the number");
	scanf("%d",&n);
	fact=n;
	i=n;
	if(n==0)
	{
		printf(" 0! is 1 ");
	}else
	if(n>0)
	{
	while(n>1)
	{
		fact= fact*(n-1);
		n--;
	}
	printf(" %d! is %d",i,fact);
	}
	else
	{
		n=(n>0)?n:-n;
		while(n>1)
		{
			fact=fact*(n-1);
			n--;
		}
		printf(" %d! is %d",i,fact);
	}
    return 0;	
}
