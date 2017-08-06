#include <stdio.h>
#include <string.h>
int main(void) {
	char day[20];
	printf(" Enter day to check whether it is working day or not : ");
	scanf("%s",day);
	switch(day[0])
	{
		case 's' : printf(" Holiday "); break;
		case 'S' : printf(" Holiday "); break;
		default : printf(" Working day "); break;
	}
	return 0;
}
