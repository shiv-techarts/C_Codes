/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

/*

	char char_a = 'A';
	char char_b = 'B';
	char *const myPtr = &char_a;
	myPtr = &char_b; //error-can't change the address of a constant pointer. 
	
	const *char myPtr = &char_a;//value of char var will not be changed 
	
	const char *const myPtr = &char_a; //nothing will be changed //everything will be a constant
*/

#include<stdio.h>

extern int b = 0;

int main(int argc, char **argv[])
{
	int ch = 500;
	int var = 10;
	int *p,*d,*n,*hex,*ext,*chp;
	char *arg;
	long double *m;
	int a = 0xFF;
	int arr[] = {1,2,3,4,5};
	int *arrp[5];
	
	
	arrp[0] = &arr;
	*chp = ch;
	hex = &a;
	p = &var;
	d = &p;
	n = &main;
	m = &main;
	arg = &argv;
	ext = &b;
//	p = 0x43fe1c;


	printf("0  %d\n",sizeof(var));
	printf("1  %d\n",var);
	printf("2  %0x\n",&var);
	printf("3  %0x\n",p);
	printf("4  %d\n",*p);
	printf("5  %0x\n",&p);
	printf("6  %0x\n",&(*p));
	printf("7  %0x\n",*(&p));
	printf("8  %d\n",*(&var));
	printf("9  %0x\n",*d);
	printf("10 %0x\n",&(*d));
	printf("11 %0x\n",*(&d));
	printf("12 %0x\n",*(&(*(d))));
	printf("13 %0x\n",main);
	printf("14 %0x\n",&main);
	printf("15 %0x\n",*n);
	printf("16 %0x\n",*(&n));
	printf("18 %0x\n",*m);
	printf("19 %0x\n",*(&m));
	printf("20 %0x\n",&(*m));
	printf("21 %0x\n",hex);
	printf("22 %0d\n",*hex);
	printf("23 %0d\n",a);
	printf("24 %0x\n",&a);
	printf("25 %0x\n",*(&hex));
	printf("26 %0u\n",*(&hex));
	printf("27 %0o\n",*(&hex));
	printf("28 %0x\n",arg);
	printf("29 %s\n",argv[1]);
	printf("30 %0x\n",&argv);
	printf("31 %0x\n",ext);
	printf("32 %d\n",*ext);
	printf("33 %0x\n",*(&ext));
	printf("34 %c\n",*chp);
	printf("35 %c\n",*(&ch));
	printf("36 %0x\n",chp);
	printf("37 %0x\n",*arrp);
	printf("38 %0x\n",arrp);
	arrp[0] = arrp[1];
	printf("39 %u\n",arrp[1]);
	printf("40 %u\n",arr[1]);
	printf("41 %u\n",arrp[0]);
	
	return 0;
}

