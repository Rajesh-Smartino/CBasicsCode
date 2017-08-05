#include <stdio.h>

int main(void) {
	char c;
	printf(" Enter char : ");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf(" It is a Vowel");
	}
	else
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf(" It is a Vowel");
	}
	else
	{
		printf(" It is a Consonant");
	}
	
	return 0;
}
