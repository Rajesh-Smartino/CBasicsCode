#include <stdio.h>

int main(void) {
	int e,p,i;
    float ans=1;
	printf(" Enter Exponent & Power");
	scanf("%d %d",&e,&p);
	if(p==0&&e==0)
	{
		printf(" Mathematical Error : Indeterminant form ");
	}
	else
	{
	i=p;
	if(p>=0)
	{
	while(i>0)
	{
		ans=ans*e;
		i--;
	}
	}
	else
	{
		while(i<0)
		{
			ans=ans/e;
			i++;
		}
	}
    printf(" Result : %f",ans);
	}
	return 0;
}
