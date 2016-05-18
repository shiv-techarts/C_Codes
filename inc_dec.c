#include<stdio.h>

int main()
{
	int a,b;
	
	a = 10;
	b = 0;
	b = ++a + ++a;
	printf("a = %d\tb = %d\n",a,b);
	
	a = 10;
	b = 0;
	b = ++a + a++;
	printf("a = %d\tb = %d\n",a,b);
	
	a = 10;
	b = 0;
	b = a++ + ++a;
	printf("a = %d\tb = %d\n",a,b);

	a = 10;
	b = 0;
	b = a++ + a++;
	printf("a = %d\tb = %d\n",a,b);
	
	return 0;
}