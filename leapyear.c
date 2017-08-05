#include <stdio.h>

int main(void) {
int year;
printf(" Enter year :");
scanf("%d",&year);
if(year>0)
 {
 if(year%4==0)
  {
	printf(" Leap year");
  }
 else
 {
	printf(" Not a leap year");
 }
 }
else
{
	printf(" Enter Valid Year");
}
	return 0;
}
