#include <stdio.h>

#define _EOF EOF

int main()
{
	int c = 0,nc = 0;

//file copying
	
	//c = getchar();
	while(c = getchar() != EOF)
	{
		putchar(c);
	//	c = getchar();
	}

//character counting
/*
	for(; getchar() != EOF ; ++nc )
		;
	printf("\n%d",nc);
*/
	return 0;
}