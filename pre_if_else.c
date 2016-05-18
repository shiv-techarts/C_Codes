#include<stdio.h>

#define _VALUE 25

#ifdef _VALUE
	
	#include"author.h"

#else
	#define _CHECK 2

#endif

//#pragma author()

int main()
{
	printf("%d\n",_VALUE);
	printf("%s",__TIME__);
	author();
	return 0;
}