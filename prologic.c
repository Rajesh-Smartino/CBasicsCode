#include <stdio.h>

int main(void) {
	int n,i=0,j,k,a;
	int arr[10],t;
	printf(" Input ");
	scanf("%d",&n);
	printf(" Number of digits to be deleted");
	scanf("%d",&t);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		arr[i]=a;
		i++;
	}
    	for (int k = 0; k < i; k++)
	{
        for (int j = 0; j < i - k - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
	}
	for(j=0;j<t;j++)
	{
		printf("%d",arr[j]);
	}
	return 0;
}
