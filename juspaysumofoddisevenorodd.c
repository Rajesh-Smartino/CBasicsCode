#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b=0;
	printf("Input");
	scanf("%d",&n);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		if(a%2!=0)
		{
			b=b+n;
		}
	}
	if(b%2!=0)
	{
		printf(" sum of odd digits is Even");
	}else
	{
		printf(" sum of odd digits is odd");
	}
	return 0;
}
