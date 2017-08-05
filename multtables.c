#include <stdio.h>

int main(void) {
int t,l,i;
printf("Enter the table to print ");
scanf("%d",&t);
printf("Enter the limit");
scanf("%d",&l);
for(i=1;i<=l;i++)
{
	printf("%d*%d=%d\n",t,i,t*i);
}

return 0;
}
