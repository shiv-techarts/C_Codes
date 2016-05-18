//Header Files

#include<stdio.h>
#include<process.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>

//main function

int main()
{
	char dst[80] = {"del /q \""};
	char dst2[80] = {"\""};
	
	char ch[80],ch2[80];
	FILE *fp,*fo;
	char ex[80];;	
	char str1[] = {"-"};
	char str2[] = {"Copy."};

	printf("Enter Extension of the files to delete:\nEx-(.mp3)(Without '.')\n");
	scanf("%s",&ex);
	strcat(str2,ex);
	
	system("dir /w >copy_mp3.txt");

	fp = fopen("copy_mp3.txt", "r");
	
	//checking for existence

	if (fp == NULL)
	{
		//if not: creating file

		system("dir /w >copy_mp3.txt");
		fp = fopen("a.txt", "r");
		
		//rechecking for existence

		if (fp == NULL)
		{
			printf("Can't Open the database!\a");
			exit(1);
		}
	}
	
	while (!feof(fp))
	{
		char dst[80] = {"del /q \""};
		char dst2[80] = {"\""};

		fo = fopen("copy_temp.txt", "w");

		fgets(ch,80,fp);
		fputs(ch,fo);
		fclose(fo);
		fo = fopen("copy_temp.txt", "r");
		while (!feof(fo))
		{
					fscanf(fo,"%s",ch2);
					if (strcmpi(str2, ch2) == 0)
					{
						strcat(dst,ch);
						strcat(dst,dst2);
						system(dst);
						fclose(fo);
						break;
					}
			
		}
		fclose(fo);
		
	}
	fclose(fp);
	system("del /q copy_mp3.txt,copy_temp.txt");
		
	return 0;
}