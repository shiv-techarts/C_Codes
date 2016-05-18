#include<stdio.h>

int main()
{
	int cID = 0, dID = 0; 
	long iD = 0;
	
	printf("Enter College ID\n");
	scanf("%d",&cID);
	
	if(cID == 1523)
	{
		printf("Enter Department ID\n");
		scanf("%d",&dID);
		if(dID == 15231)
		{
			printf("CS: Enter ID No.\n");
			scanf("%ld",&iD);
			if(iD == 152311)
			{
				printf("Logged In...\n");
			}
			else 	
			{
				printf("Not Valid ID No.\n");	
			}
		}
		else if(dID == 15232)
		{
			printf("IT: Enter ID No.\n");
			scanf("%ld",&iD);
			if(iD == 152311)
			{
				printf("Logged In...\n");
			}
			else 	
			{
				printf("Not Valid ID No.\n");	
			}
		}
		else if(dID == 15233)
		{
			printf("EC: Enter ID No.\n");
			scanf("%ld",&iD);
			if(iD == 152311)
			{
				printf("Logged In...\n");
			}
			else 	
			{
				printf("Not Valid ID No.\n");	
			}
		}
		else
		{
			printf("Not Valid Department ID\n");	
		}
	}
	else
	{
		printf("Not Valid College ID\n");
	}	                                                                                 return 0;
}