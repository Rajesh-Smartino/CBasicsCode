#include <stdio.h>
int static j=0;
int main(void) {
	// your code goes here
	int arr[20],array[20],k,i,n;
	printf("Enter Rotation factor ");
	scanf("%d",&k);
	printf("\nEnter no of elements ");
	scanf("%d",&n);
	printf("\nEnter Array elements ");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=k;i<n;i++)
	{
		array[j]=arr[i];
		j++;
	}
	for(i=0;i<k;i++)
	{
		array[j]=arr[i];
		j++;
	}
	for(i=0;i<n;i++)
    printf("%d ",array[i]);
	return 0;
}
