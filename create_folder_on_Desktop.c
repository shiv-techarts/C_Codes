/*
 * Shiv Pratap Singh
 * Create a folder on desktop by finding user name
 *
*/


//Header Files

#include<stdio.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

//main function

int main()
{
	//Desktop navigation variables

	char dst[80] = {"md \"C:\\Users\\"};
	char final[80] = {""};
	char dsk[80] = {"\\Desktop\\"};
	char end[80] = {"\""};
	
	//username finding variables

	char ch[80];
	char domain[80];
	char user[80];
	FILE *fp;
	char str1[] = {"Name:"};
	char str2[] = {"Owner:"};
	int f1 = 0 , f2 = 0;

	//requesting for folder name

	printf("Enter name of folder to create on desktop.\n");
	gets(final);
	system("cls");
	
	//opening file in read mode
	
	fp = fopen("C:\\windows\\systeminfo.txt", "r");

	//checking for existence

	if (fp == NULL)
	{
		//if not: creating file

		system("systeminfo > C:\\windows\\systeminfo.txt");
		fp = fopen("C:\\windows\\systeminfo.txt", "r");
		
		//rechecking for existence

		if (fp == NULL)
		{
			printf("Can't Open the database!\a");
			exit(1);
		}
	}
	
	//finding domain and username from file

	while (!feof(fp))
	{
		fscanf(fp, "%s", &ch);
		if (strcmp(str1, ch) == 0 && f1 == 0)
		{
			f1 = 1;
			fscanf(fp, "%s", &domain);
		}
		if (strcmp(str2, ch) == 0 && f2 == 0)
		{
			f2 = 1;
			fscanf(fp, "%s", &user);
		}
	}
	
	//concating and changing directory to folder
	
	if(f1 == 1 && f2 == 1)
	{
		strcat(dst,user);
		strcat(dst,dsk);
		strcat(dst,final);
		strcat(dst,end);
		system(dst);	
		printf("Folder Created....");
		getch();
	}
	else
	{
		printf("Domain Not Found.\n");
		getch();
	}
	
	//closing the file
	
	fclose(fp);
	
	return 0;
}
