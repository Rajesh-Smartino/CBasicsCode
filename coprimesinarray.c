#include <stdio.h>
int hcff(int,int);
int main(void) {
	int hcf,i,j,count=0;
	int arr[20];
	int n; // size of array
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i!=j)
			{
				
		        	if(hcff(arr[i],arr[j])==1)
		         	{
		         		
		            	 printf("(%d,%d)",arr[i],arr[j]);
		            	 count++;
		        	}
		    	
			}
		}
	}
	printf(" Count =%d",count);
	return 0;
}
int hcff(int x,int y)
{ int z,i=1;
	while(i<y||i<x)
	{
		if(x%i==0&&y%i==0)
		{
		   z=i;
		}
		i++;
	}
	return z;

}
