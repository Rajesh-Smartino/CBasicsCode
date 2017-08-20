#include <stdio.h>

int main(void) { 
	int i,k,j,n;
	printf("Level ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(k=0;k<2;k++)
		{
			for(j=0;j<n-i;j++)
			{
				printf("*");
			}
			printf(" ");
		}
		printf("\n");
		
	}
	return 0;
}
