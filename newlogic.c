#include <stdio.h>
#include <math.h>
int main(void) {
	int a,b,n,c=0;
	int sa,sn,d=0;
	printf(" Input ");
	scanf("%d",&n);
	b=a;
	sn=n;
	while(n>0)
	{
		a=n%10;
		n=n/10;
		c++;
	}
	while(sn>0)
	{
		b=sn%10;
		sn=sn/10;
		d=d+(pow(b,c-1));
		c--;
	}
   printf(" Sum =%d",d);
	return 0;
}
