#include <stdio.h>

int main(void) {
	int a,b,count=0;
	printf(" Enter Integer ");
	scanf("%d",&a);
	if(a>=0)
	{
	while(a>0)
    {
    	b=a%10;
    	a=a/10;
    	count++;
    }
	}
	else
	{
		while(a<0)
		{
			b=b%10;
			a=a/10;
			count++;
		}
	}
    printf(" No of digits in Integer is %d",count);

	return 0;
}
