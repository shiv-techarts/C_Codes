#include<stdio.h>

int main()
{
	/*float i = 1.6;
	int ab[4]={9,2,7,5};
	int a[5]={1,2,3,4,5};
	printf("arr = %d\t%d",&a[-i],&ab[5]);
	return 0;*/

	int arr[5][5],i,j;
	
	printf("Enter the values of array\n");
	for(i = 0;i < 5; i++)
	{
		for(j = 0 ; j < 5 ;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("values of array\n");
	for(i = 0 ;i < 5 ; i++)
	{
		for(j = 0 ; j < 5 ;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
}