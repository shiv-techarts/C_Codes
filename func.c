/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

#include<stdio.h>
#include"author.h"
#include"string.h"

void call()
{
	printf("Called Check\n");
}

void call2(int a)
{
	printf("Called Check 2\n");
}

void call3();

int main()
{
//	char a[]="Hello, World";
	call();
	call2(4);
	call3();
	author();
	strlen();
	return 0;
}

void call3()
{
	printf("Called Check 3\n");
}

