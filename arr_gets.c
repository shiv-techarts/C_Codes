#include<stdio.h>

int main()
{
	int i = 0;
	char ch[20];
	
/*	do
	{
		ch[i] = getchar();
		i++;
	}while(ch[i] != '\0' );*/

	for(i = 0; i < 5 ;i++ )
	{
		scanf("%s",&ch[i]);
	}

	for(i = 0 ; i < 5 ;i++ )
	{
		printf("%s",ch[i]);
	}

	printf("\n");

	for(i = 0; i < 5 ;i++ )
	{
		printf("%c",ch[i]);
	}

	printf("\n");

	for(i = 0; i < 5 ;i++ )
	{
		printf("%d",ch[i]);
	}
	return 0;
}