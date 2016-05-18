#include<stdio.h>

int main() {
	//int main = 0;
	int ma = 0 ; 
	printf("func - %p\n",&main);	
	printf("var - %0x\n",main);
	if(main <= 0) {
		//main++;
		main();
		printf("func - %p\n",&main);	
		printf("var - %d\n",main);
	}
	return 0;
}