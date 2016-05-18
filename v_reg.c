#include<stdio.h>

void eDetails()
{
	char oName[30];
	char regID[20];
	printf("Enter Name:\n");
	scanf("%s",&oName);
	printf("Enter Registration ID:\n");
	scanf("%s",regID);
	printf("Your Registration Completed Successfully..");
}

int main()
{
	int tChoice = 0;
	int vType = 0;
	
	printf("Select Transport Type:\n1. 4 Wheeler\n2. 3 Wheeler\n3. 2 Wheeler\n");
	scanf("%d",&tChoice);
	
	if(tChoice == 1)
	{
		printf("Select Vehicle:\n1. Bus\n2. Car\n");
		scanf("%d",&vType);
		if(vType == 1)
		{
			eDetails();
		}
		else if(vType == 2)
		{
			eDetails();
		}
		else
		{
			printf("Registration Failed..");
		}
	}
	else if(tChoice == 2)
	{
		printf("Select Vehicle:\n1. Auto\n2. Tempo\n");
		scanf("%d",&vType);
		if(vType == 1)
		{
			eDetails();
		}
		else if(vType == 2)
		{
			eDetails();
		}
		else
		{
			printf("Registration Failed..");
		}
	}
	else if(tChoice == 3) 
	{
		printf("Select Vehicle:\n1. Bike\n2. Scooty\n");
		scanf("%d",&vType);
		if(vType == 1)
		{
			eDetails();
		}
		else if(vType == 2)
		{
			eDetails();
		}
		else
		{
			printf("Registration Failed..");
		}
	}
	else
		printf("Wrong Entry..");
	return 0;
}