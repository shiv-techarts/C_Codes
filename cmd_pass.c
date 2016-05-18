/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

#include<stdio.h>

/*char **argv-value & int argc- counter. main takes values as a string */
int main(int argc,char* argv[]) 	
{
	int i = 1;
	for(;i<argc;i++)
	printf("%s\t%d\n",argv[i],i);
	return 0;
}

