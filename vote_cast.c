#include<stdio.h>

int main()
{
	int gChoice = 0;
	int date = 0,month = 0,year = 0;
	printf("Select your Gender\n1. Male\n2. Female\n");
	scanf("%d",&gChoice);
	
	printf("Enter Date Of Birth\n");
	printf("Year\n");
	scanf("%d",&year);
	printf("Month\n");
	scanf("%d",&month);
	printf("Date\n");
	scanf("%d",&date);

	if((2015 - year) >= 18)
		printf("You can cast your valuable vote.\n");
	else
		printf("You are not eligible.\n");

	return 0;
}