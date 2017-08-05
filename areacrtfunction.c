#include <stdio.h>
int area(int,int);
int area1(int);
int area2(int,int);
int main() {
	int l,b,r,c,h;
	printf("1. Area of Circle\n2. Area of Triangle\n3. Area of Rectangle");
	printf("Enter your choice");
	scanf("%d",&c);
	switch(c)
	{
		case 1: printf(" Enter radius of Circle");
		scanf("%d",&r);
		if(r<=0)
		{
			printf(" Radius must be greater than 0");
		}else
		{
			printf(" Area = %f",area1(r));
		}
		break;
		case 2: printf(" Enter base & height ");
		scanf("%d%d",&b,&h);
		if(h<=0||b<=0)
		{
			printf("Base & height cannot be 0 or negative");
		}else
		{
		printf("Area = %f",area2(h,b));
		}
		break;
		case 3: printf(" Enter dimensions ");
		scanf("%d%d",&l,&b);
			if(l<=0||b<=0)
			{
				printf(" Dimensions should be positive");
			}else{
			printf("Area = %f ",area(l,b));
			} break;
		default : printf(" Enter valid choice");
	}
	return 0;
}
int area(int x,int y)
{
	return(x*y);
}
int area1(int z)
{
	return(2*3.14*z*z);
}
int area2(int u,int v)
{
	return(u*v*0.5);
}
