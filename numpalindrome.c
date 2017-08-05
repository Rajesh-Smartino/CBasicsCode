#include <stdio.h>

int main(void) {
	int a,b,c,d=0;
	printf(" Input : ");
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		c=b%10;
		d=d*10+c;
		b=b/10;
	}
    if(a==d)
    {
    	printf(" %d = %d so Palindrome",a,d);
    }
    else
    {
    	printf(" %d != %d so Not palindrome",a,d);
    }
	return 0;
}
