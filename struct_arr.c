/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/
#include<stdio.h>

struct stu
{
	enum
	{
	 	a1 = 'a',a2	
	};
	int id;
	int year;
	char name[20],course[20];
//	char chk[];
};


int main()
{
	struct stu st1,st2;
	
	printf("ID = \n");
	scanf("%d",&st1.id);
	printf("Name = \n");
	scanf("%s",&st1.name);
	printf("Course = \n");
	scanf("%s",&st1.course);
	printf("Year = \n");
	scanf("%d",&st1.year);
	printf("\n%c\n",a1);
	
	return 0;
}

