#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,flag=0,l1,l2;
	printf("Enter limits : ");
	scanf("%d%d",&l1,&l2);
	if(l1<3)
	{
		printf("2 ");
	}
	for(int n=l1;n<l2;n++)
	{
	for(i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			printf("%d ",n);
			flag=1;
		}
		if(flag==1)
		break;
	}
	}
	return 0;
}
