#include<stdio.h>

int main()
{
	int yr = 0;
	printf("Enter any year :\n");
	scanf("%d",&yr);
	if(yr % 2 == 0 || yr % 400 == 0)
		printf("Entered year is a leap year\n");
	else
		printf("Entered year is not a leap year\n");
	return 0;
}