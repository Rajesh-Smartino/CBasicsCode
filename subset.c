#include <stdio.h>

int main(void) {

	int n,i,k,d,j=0;
	char str[50];
	scanf("%s",str);
	n = strlen(str);
	scanf("%d",&k);
	d=k;
	for(i=1+j;i<n;i++)
	{
		if(i%2!=0)
		{
		printf("%c",str[0]);
		j=i;
		while(k-1>0)
		{
		 printf("%c",str[j]);
		 k--;
		 j++;
		}
		k=d;
		printf("\n");
		}
	}
	return 0;
}
