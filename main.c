#include<stdio.h>
#include"check.h"
#include<process.h>

static int i = 0;

int main(int a)
{
	printf("value is = %d	%d\n",a,i);
	if(i < a)
	{
		i++;
		printf("Hello, World %d\n",main(a));	
		exit(a);
	}
	//owner();
    return a;
}