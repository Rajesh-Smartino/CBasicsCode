#include <stdio.h>

int main(void) { 
int n,l1,l2;
printf("Enter Range");
scanf("%d%d",&l1,&l2);
do
{
printf("Enter Input");
scanf("%d",&n);
if(n>l1&&n<l2)
{
	printf("Valid Input");
}else
{
	printf("Invalid Input");
}
}while(n<l1&&n>l2);
	return 0;
}
