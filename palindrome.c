#include<stdio.h>

int main()
{
	int n = 0, x = 0 ,s = 0 ,i,f = 1,no = 0, m = 0 ,z = 10000;
	printf("Enter a Number:\n");
	scanf("%d",&no);
	n = no;
	
	for(i = 0; n % 10 != 0; i++, z = z/10 )
	{
		x = n % 10;
		m = m + x * z;
		if(m == no)
			f = 0; 
		if(i == 0 || i == 4)
			s = s + x;
		n = n / 10; 
	}
	if(f == 1)
		printf("Number is not a palindrome\n");
	else
		printf("Number is a palindrome\n");
	printf("Sum of 1st and last digit is: %d",s);
	
	return 0;
}