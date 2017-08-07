#include <stdio.h>
#include <string.h>
int main(void) {
	char day[10];
     printf("Enter Day");
    scanf("%s",day);
    if(day[0]=='s'||day[0]=='S')
    {
    	if(day[1]=='u'||day[1]=='U'||day[1]=='a'||day[1]=='A')
    	{
    		if(day[2]=='n'||day[2]=='N'||day[2]=='t'||day[2]=='T')
    		{
    			printf(" Holiday");
    		}
    	}
    }else
    {
    	printf("Working day");
    }
	return 0;
}
