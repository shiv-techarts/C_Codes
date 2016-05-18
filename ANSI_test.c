/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

#include<stdio.h>

int main()
{
	int a = 10;
	int b = 10;
	int *pa,*pb;
	pa = &a;
	pb = &b;
	printf("%d\n",*pa == *pb);
	printf("%d\n",*pa != *pb);
	printf("%d\n",__DATE__);
	printf("%d\n",__TIME__);
/*	printf("%d\n",a);
	printf("%c\n",a);
//	printf("%s\n",a);
	printf("%f\n",a);
	printf("%ld",a); */
	return 0;
}

