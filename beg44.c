#include <stdio.h>

int main(void) { 
int n;
printf("Enter number");
scanf("%d",&n);
if(n>0&&n<10)
{
	printf(" Yeah, Within Range");
}else
{
	printf(" Not in Range");
}
	return 0;
}
