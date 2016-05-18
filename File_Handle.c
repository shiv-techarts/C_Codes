#include<stdio.h>
#include<process.h>

int main()
{
	FILE *fp;
	char ch;
	char s = 's';
	int i = 0,f = 0;
	long n = 0;
	
	fp = fopen("check.h","r");
	if(fp == NULL)
	{
		printf("Can't Open File!");
		exit(1);
	}
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
			break;
	/*	else if(ch == s && f == 0)
		{ 
			n = ftell(fp);
			fseek(fp,n-4,SEEK_SET);
			while(i < 4)
			{	
				ch = fgetc(fp);
				fprintf(fp,"\b%c",ch);
				i++;
			} 
			f = 1; 
		}	*/
		putchar(ch); 
	}
	printf("\n");
	fclose(fp);
	return 0;
}