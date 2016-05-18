#include<stdio.h>
#include<process.h>

int main()
{
	int i = 0;
	while(i < 5)
	{
		system("explorer.exe");
		++i;
	}
	return 0;
}