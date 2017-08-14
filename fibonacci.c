#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c;
	printf("Enter limit : ");
	scanf("%d",&n);
    a=-1;
    b=1;
    while(n>0)
    {
    	c=a+b;
    	printf("%d ",c);
    	a=b;
    	b=c;
    	n--;
    	
    }
    if(n<=0)
    {
    	printf("Fibonacci cannot be generated \n INPUT ERROR");
    }
	return 0;
}
