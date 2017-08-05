#include <stdio.h>

int main(void) {
int l1,l2,i;
printf("Enter limits ");
scanf("%d%d",&l1,&l2);
if(l1>l2)
{
	int t;
	t=l1;
	l1=l2;
	l2=t;
}
for(i=l1;i<=l2;i++)
{
	if(i%2==0)
	{
		printf("%d\n",i);
	}
}
return 0;
}
