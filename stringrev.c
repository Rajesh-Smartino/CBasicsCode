#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	int i,n;
	printf("Enter string ");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		char t=str[i];
		str[i]=str[n-1];
		str[n-1]=t;
		n--;
	}
	printf(" Reverse : %s",str);
	return 0;
}
