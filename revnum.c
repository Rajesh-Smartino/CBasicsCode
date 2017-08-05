#include <stdio.h>

int main(void) {
	int a,b,c,d=0;
	printf(" Enter Input : ");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		c=b%10;
		b=b/10;
		d=d*10+c;
	}
	printf(" Reverse of %d is : %d",a,d);
	return 0;
}
