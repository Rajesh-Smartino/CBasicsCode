#include <stdio.h>
int main(void) {
int a,b,c,d=0;



	printf(" Input : ");



	scanf("%d",&a);



	b=a;



	while(b!=0)



	{



		c=b%10;



		d=d+(c*c);



		b=b/10;



	}
    	printf(" Obtained logic for %d is %d",a,d);


	return 0;
}
