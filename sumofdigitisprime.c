#include <stdio.h>
int sumofdigit(int);
int primecheck(int);
int main(void) {
	int i,l1,l2;
	int count=0,x,y;
	scanf("%d%d",&l1,&l2);
    for(i=l1;i<=l2;i++)
     {
     	x=sumofdigit(i);
     	y=primecheck(x);
     	if(y==1)
     	{
     		count++;
     	}
     }
     printf("%d",count);
	return 0;
}
int sumofdigit(int a)
{
	int b,c=0;
	while(a>0)
	{
	 b=a%10;
	 a=a/10;
	 c=c+b;
	}
	return c;
}
int primecheck(int d)
{
	int flag=0,i;
	for(i=2;i<d;i++)
	{
		if(d%i==0)
		{
			flag=1;
		}
	}
	if(flag==0&&d!=1)
	{
		return 1;
	}else
	{
		return -1;
	}
}
