#include<stdio.h>

int main()
{
	int a1 = 0,a2 = 0 ,sum = 0,sub = 0,mul = 0,div = 0,mod = 0;
	scanf("%d%d",&a1,&a2);
	printf("\nvalue of a1 = %d\nvalue of a2 = %d\n",a1,a2);
	sum = a1 + a2;
	sub = a1 - a2;
	mul = a1 * a2;
	div = a1 / a2;
	mod = a1 % a2;
	printf("sum = %d\nsub = %d\nmul = %d\ndiv = %d\nmod = %d ",sum,sub,mul,div,mod);
	return 0;
}