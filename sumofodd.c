#include <stdio.h>

int main(void) {
    int i,n,sum=0;
    printf("Range : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	if(i%2!=0)
    	{
    		sum=sum+i;
    	}
    }
    printf(" Sum of odd : %d",sum);
	return 0;
}
