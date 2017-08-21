/* The following Question follow Fibonacci Series
  Number of Steps         Ways
  1                       1
  2                       (1,1) 2 = 2
  3                       (1,1,1)(1,2)(2,1) = 3
  4                       (1,1,1,1)(1,2,1)(2,1,1)(1,2,2)(2,2)=5 */
#include <stdio.h>

int main(void) {
	int n,i,a,b,c;
	printf("Enter Number of Steps");
	scanf("%d",&n);
	a=0;
	b=1;
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	printf("\nMan can climb %d number of ways",c);
	return 0;
}
