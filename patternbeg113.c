#include <stdio.h>

int main(void) { 
	int i,k,j,n,l;
	printf("Level ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
			{
				printf("*");
			}
		printf("\n");
	}
	return 0;
}
