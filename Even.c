#include <stdio.h>

int main(void) {
	int n,i,flag;
	printf("Enter Number :");
	scanf("%d",&n);
	flag=0;
	if(n>0)
	{
	for(i=0;i<n;i++)
	{
		if(n==2*i)
		{
			flag=1;
			printf(" Even ");
			break;
		}
	}}
	else if(n<0)
	{
		for(i=n;i<0;i++)
		{
			 if(n==2*i)
		{
			flag=1;
			printf(" Even ");
			break;
		}
		}
	}
	else 
	{
		flag=1;
		printf(" Even ");
	}
	
	if(flag==0)
	{
		printf(" Odd ");
	}
	return 0;
}
