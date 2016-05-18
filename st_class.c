#include<stdio.h>

//extern int c;
static int d = 9 ;

int main()
{
	auto int a = 0;
	register int b = 1;
	//extern int c;
	static int d = 2;
	int f = 0 ;
	{
		auto int a = 1;
		register int b = 2;
		static int d = 3;
		printf("auto Inside block %d",a);
		printf("\nregister Inside block %d",b);
		printf("\nststic Inside block %d",d);
	}
	printf("\nauto outside block %d",a);
	printf("\nregister outside block %d",b);
	//printf("\nextern%d",c);
	printf("\nstatic outside block %d",d);
	
	while(a < 2)
	{
		auto a = 3 ;
		while(a < 5)
		{
			printf("\nnested while%d",a);
			++a;
		}
		printf("\nwhile%d",a);
		++a;
		if(f == 6)
			break;
		++f;
	}	


	return 0;
	
	
}
