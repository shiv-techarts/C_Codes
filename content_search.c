#include<stdio.h>
#include<process.h>

int main()
{
	FILE *fp;
	
	fp = fopen("test.txt","r");
	
	if(fp == NULL)
	{
		printf("Can't Open File\n");
		exit(1);
	}
	while(1)
	{
		ch = getchar();
		if(ch == '\0')
		{
			break;
		}
		
	}
	return 0;
}