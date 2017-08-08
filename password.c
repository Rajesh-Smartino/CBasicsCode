#include <stdio.h>
#include <string.h>
static int j;
int main(void) {
	char s1[20],s2[20],s[40];
	int d[20];
	int n1,n2,i;
	printf(" String 1 :");
	scanf("%s",s1);
	printf("\n String 2 :");
	scanf("%s",s2);
	n1=strlen(s1); //Calculates length
	n2=strlen(s2);
    if(n1>n2)                         //if length of string is small
    {                                // then append 1 to n
    	for(i=0;i<n1-n2;i++)
    	{
    		s2[i+n2]=i+1;
    	}
    }else
    {
    	for(i=0;i<n2-n1;i++)
    	{
    		s1[i+n1]=i+1;
    	}
    }
	for(i=0;i<n1+n2;i++)    // swap characters
	{
		if(i%2==0)
		{
			s[i]=s1[j];
		}
		else
		{
			j--;
			s[i]=s2[j];
		}
		j++;
	}
	printf(" \nGenerated Password is %s ",s);
	return 0;
}
