#include<stdio.h>

//#define a 0.1

int main()
{
	float a = 0.1, b = 0.1;
	char ac[5] = "Shiv";
	float *p = &b;
	if(a == *p)
		printf("a");
//	printf("1");	
//	printf("2");
// 	printf("3");
	else
		printf("b");
	return 0;
}