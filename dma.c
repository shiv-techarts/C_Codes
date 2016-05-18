/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

#include<stdio.h>
#include<stdlib.h>

/*
		void *malloc(int);
			allocates specified number of bytes, returns pointer pointing towards the base address of that address.
			garbage is initialized.
			
		void *calloc(int);
			allocates specified number of bytes, memory is shatered.
			zero is initialized.
		
		void *realloc(void*,int size);
			reallocates free memory.
		
		void free(void*);
			deallocates memory.
*/

int main()
{
	int no,i,sum = 0;
	int *ptr;
	printf("Size of int:\n%d",sizeof(int));
	printf("\nInput No of values:\n");
	scanf("%d",&no);
	
	for(i = 0; i < no ; i++)
	{
		ptr = (int *)malloc(sizeof(1));
		printf("Input Value %d :\n",i+1);
		scanf("%d",ptr);
		sum+=*ptr;
	}
	printf("Overall Sum :\n%d",sum);
	free(ptr);	
	return 0;
}

