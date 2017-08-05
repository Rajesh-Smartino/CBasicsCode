#include <stdio.h>
int main(void) {
	char c,i;
	int flag=0;
	printf(" Enter char : ");
	scanf("%c",&c);
	for(i='a';i<'z';i++)
	{
			if(c==i)
		{
			flag=1;
			printf(" It is a character");
		}
	}
	for(i='A';i<'Z';i++)
	{
	   	if(c==i)
		{
			flag=1;
			printf(" It is a character");
		}
	}
	if(flag==0)
	{
		printf(" It is not a character");
	}
	return 0;
}
