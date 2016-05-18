#include <stdio.h>
#include <process.h>
#include <string.h>
#include <ctype.h>

int main()
{
	FILE *fp;
	FILE *fu;
	
	char userID[80];
	char bookID[80];
	char userTemp[80];
	char ch[80];
	char date[80];
	char mon[80];
	char day[80];
	char year[80];
	
	printf("Enter userID:\n");
	scanf("%s",&userID);
	strcpy(userTemp,userID);
	printf("Enter book ID to return:\n");
	scanf("%s",&bookID);
	printf("Enter issue Date:\n");
	scanf("%s\t%s\t%s",&mon,&day,&year);
		
	strcat(userID,"Issue.txt");
	strcat(userTemp,"Temp.txt");

	fp = fopen(userID,"r");
	fu = fopen(userTemp,"a+w");

	if(fp == NULL)
	{
		printf("Can't Open the database 1");
		exit(1);
	}
	if(fu == NULL)
	{
		printf("Can't Open the database 2");
		exit(1);
	}


	while(1)
	{
		fscanf(fp,"%s",&ch);

		if(strcmp(bookID,ch) == 0)
		{
			do
			{
				fscanf(fp,"%s",&ch);
			}while(strcmp(ch,year) != 0);
		}
		else if(feof(fp))
			break;
		else
			fprintf(fu,"%s\t",ch);
	}

	if(strcmp(day,__DATE__) <= 0)
		{
			printf("\nNo Fine");
		}
		else	
			printf("\nFine is Rs. 20");
	
	fclose(fp);
	fclose(fu);
	remove(userID);	
	rename(userTemp,userID);
	
	
}