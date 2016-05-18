#include<stdio.h>

int main()
{
	float a = 0.0 ,b = 0.0 ,c = 0.0 ;
	int n = 0,q = 0,w = 0,e = 0,f = 0;
	printf("Enter Hardness of steel\n");
	scanf("%f",&a);
	printf("Enter Carbon Content of steel\n");
	scanf("%f",&b);
	printf("Enter Tensile Strength of steel\n");
	scanf("%f",&c);
	
	if(a > 50)
	{
		q = 1;
		f++; 
	}
	if(b < 0.7)
	{
		w = 2;
		f++;
	}
	if(c > 5600)
	{
		e = 3;
		f++;
	}
	
	n = q + w + e ;
	if(f == 1)
	{
		printf("Grade 6 Steel\n");
	}
	else
	{
	switch(n)
	{
		case 6: printf("Grade 10 Steel\n");
			break;
		case 3: printf("Grade 9 Steel\n");
			break;
		case 5: printf("Grade 8 Steel\n");
			break;
		case 4: printf("Grade 7 Steel\n");
			break;	
		case 0: printf("Grade 5 Steel\n");
			break;
	}
	}


	return 0;
}