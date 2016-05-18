#include<stdio.h>

int main()
{
	float salary = 0.0,da = 0.0,hra = 0.0,bonus = 0.0;
	
	printf("Enter your salary:\n\nRs ");
	scanf("%f",&salary);
	
	printf("\n\tSalary Chart\n");
	printf("\t============\n\n");
	if(salary < 20000)
	{
		printf(" DA       \t: Rs %.2f\n",da = salary * 0.10);
		printf(" HRA      \t: Rs %.2f\n",hra = salary * 0.12);
		printf(" BONUS    \t: Rs %.2f\n",bonus = 5000);
		printf("===============================\n");		
		printf("TOTAL PAY\t: Rs %.2f\n",salary+da+hra+bonus);
	}
	else if(salary >= 20000 && salary < 25000)
	{
		printf(" DA       \t: Rs %.2f\n",da = salary * 0.12);
		printf(" HRA      \t: Rs %.2f\n",hra = salary * 0.15);
		printf(" BONUS    \t: Rs %.2f\n",bonus = 7000);
		printf("===============================\n");
		printf("TOTAL PAY\t: Rs %.2f\n",salary+da+hra+bonus);
	}
	else if(salary >= 25000 && salary < 30000)
	{
		printf(" DA       \t: Rs %.2f\n",da = salary * 0.15);
		printf(" HRA      \t: Rs %.2f\n",hra = salary * 0.16);
		printf(" BONUS    \t: Rs %.2f\n",bonus = 10000);
		printf("===============================\n");
		printf("TOTAL PAY\t: Rs %.2f\n",salary+da+hra+bonus);
	}
	else
		printf("Your entered salary is not accepted.");
	return 0;
}
