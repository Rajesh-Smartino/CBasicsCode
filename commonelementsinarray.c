#include <stdio.h>
int main(void) {
	int arr1[20],arr2[20];
	int n1,n2,i,count=0,j,k;
	printf("Total no of elements\n");
	scanf("%d",&n1);
	printf("Array1 Elements \n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
		
	}
	printf("\nTotal no of elements\n");
	scanf("%d",&n2);
	printf("\nArray 2 Elements \n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(k=0;k<n1;k++)
	{
		
		for(j=0;j<n2;j++)
		{
			
		 if(arr1[k]==arr2[j])
		 {
		 	count++;
		 }
		}
	}
	printf("\nCommon = %d elements",count); 
	return 0;
}
