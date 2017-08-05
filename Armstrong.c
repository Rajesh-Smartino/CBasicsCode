#include <stdio.h>



int main(void) {

	int a,b,c,d=0;

	printf(" Input : ");

	scanf("%d",&a);

	b=a;

	while(b!=0)

	{

		c=b%10;

		d=d+(c*c*c);

		b=b/10;

	}

    if(a==d)

    {

    	printf(" %d = %d so Armstrong",a,d);

    }

    else

    {

    	printf(" %d != %d so Not Armstrong",a,d);

    }

	return 0;

}
