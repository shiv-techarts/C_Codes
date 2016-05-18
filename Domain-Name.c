#include<stdio.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

int main()
{
	char ch[80];
	char domain[80];
	char user[80];
	FILE *fp;
	char str1[] = {"Name:"};
	char str2[] = {"Owner:"};
	int f1 = 0 , f2 = 0;

	system("systeminfo > a.txt");
	getch();
	
	fp = fopen("a.txt", "r");

	if (fp == NULL)
	{
		printf("Can't Open the database!\a");
		exit(1);
	}

	while (!feof(fp))
	{
		fscanf(fp, "%s", &ch);
		if (strcmp(str1, ch) == 0 && f1 == 0)
		{
			f1 = 1;
			fscanf(fp, "%s", &domain);
			//break;
		}
		if (strcmp(str2, ch) == 0 && f2 == 0)
		{
			f2 = 1;
			fscanf(fp, "%s", &user);
			//break;
		}
	}
	if(f1 == 1 && f2 == 1)
	{
		printf("1. Domain Name\n\n%s",domain);
		printf("\n\n2. User Name\n\n%s\n",user);
		getch();
	}
	else
	{
		printf("Domain Not Found.\n");
		getch();
	}
	fclose(fp);
	
	return 0;
}