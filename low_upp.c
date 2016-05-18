#include<stdio.h>

int main()
{
	char ch = '\0';
	printf("Enter any character\n");
	ch = getchar();
	if(ch >= 65 && ch <= 90)
		printf("Entered character is in Uppercase\n");
	else if(ch >= 97 && ch <= 122)
		printf("Entered character is in lowercase\n");
	else if(ch >= 48 && ch <= 57)
		printf("Entered character is a digit\n");
	else
		printf("Entered character is a special one\n");
	return 0;
}