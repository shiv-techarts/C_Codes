#include<stdio.h>

int main()
{
	int no = 0;
	printf("Enter a Number:\n");
	scanf("%d",&no);
	if(no % 2 == 0)
		printf("Entered Number is even\n");
	else
		printf("Entered Number is odd\n");
	return 0;
}