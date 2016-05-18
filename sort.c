#include<stdio.h>

int main()
{
	int a[5] = {2,5,1,4,8};
	int i ,j,temp = 0;
	
	for(i = 0; i < 5; i++)
	{
		for(j = i+1; j<=5;j++)
		{
		if(a[i] > a[j])
		{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
		}
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}