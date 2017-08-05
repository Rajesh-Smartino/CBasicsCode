#include <stdio.h>
#include <string.h>
int main(void) {
	char str[20];
	int n,i;
	printf("Enter String : ");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		int temp =str[i];
		str[i]=str[i+1];
		str[i+1]=temp;
		i++;
	}
	printf("After swap : %s",str);
	return 0;
}
