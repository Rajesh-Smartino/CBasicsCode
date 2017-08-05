#include <stdio.h>

int main(void) {
	int n,i,sum=0;
	printf("Enter n :");
	scanf("%d",&n);
	if(n>=0)
	{
	for(i=1;i<=n;i++)
	sum+=i;
	}
	else
	{
		for(i=n;i<0;i++)
		{
			sum+=i;
		}
	}
	printf("Sum = %d",sum);

	return 0;
}
