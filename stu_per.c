#include<stdio.h>

int main()
{
	int i,tt = 0;
	int per = 0, marks[10];
	int no = 1;
	char ch = '\0';

	do
	{
		printf("Enter Marks for student: %d\n", no);
		printf("===========================\n\n");
		for(i = 0; i < 10; i++)
		{
			printf("Enter Marks of Subject: %d\n",i+1);
			scanf("%d",&marks[i]);
			per = per + marks[i];
		}
		
		tt = (per/10) ;

		printf("Total Percentage obtained: %d %%\n\n",tt);

		printf("Want to Enter Marks for more (Y or N): \n");
		scanf("%d",&ch);
		++no;
	}while(ch == 'Y' || ch == 'y');
	
	return 0;
}