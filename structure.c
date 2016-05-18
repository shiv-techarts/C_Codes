/*
Author: 	Shiv Pratap Singh
Email Id:   shiv.safari@gmail.com
Language:   C
Compiler:   GNU (TDM-GCC 4.8.1)
*/

#include<stdio.h>

struct check_c
{
	int c_int ;
	char c_char ;
	float c_float  ;
	double c_double  ;
	long double c_ld  ;
//	char c_str[]  ;
};

/*
	sizeof union will allocated on the basis of highest size datatype.
	Hence only one element is accessed at a time.
	Memory will be given to the last element entered.
*/
union check_m
{
	int m_int ;
	char m_char ;
	float m_float  ;
	double m_double  ;
	long double m_ld  ;
//	char m_str[]  ;
};

int main()
{
	struct check_c c_chk ;
	union check_m m_chk ;
	
//	c_chk.c_int = 1 ;
	
//	printf("Integer = %d\n",c_chk.c_int);

	printf("Initial values\n");
	printf("==============\n");
	printf("c_int = %d\n",c_chk.c_int);
	printf("c_char = %d\n",c_chk.c_char);
	printf("c_float = %d\n",c_chk.c_float);
	printf("c_double = %d\n",c_chk.c_double);
	printf("c_long double = %d\n",c_chk.c_ld);
	printf("m_int = %d\n",m_chk.m_int);
	printf("m_char = %d\n",m_chk.m_char);
	printf("m_float = %d\n",m_chk.m_float);
	printf("m_double = %d\n",m_chk.m_double);
	printf("m_long double = %d\n",m_chk.m_ld);
	printf("==============\n");
	
	printf("Address\n");
	printf("==============\n");
	printf("c_int = %0x\n",&c_chk.c_int);
	printf("c_char = %0x\n",&c_chk.c_char);
	printf("c_float = %0x\n",&c_chk.c_float);
	printf("c_double = %0x\n",&c_chk.c_double);
	printf("c_long double = %0x\n",&c_chk.c_ld);
	printf("m_int = %0x\n",&m_chk.m_int);
	printf("m_char = %0x\n",&m_chk.m_char);
	printf("m_float = %0x\n",&m_chk.m_float);
	printf("m_double = %0x\n",&m_chk.m_double);
	printf("m_long double = %0x\n",&m_chk.m_ld);
	printf("==============\n");
		
	printf("Size Of Datatypes\n");
	printf("=================\n");
	printf("int = %d\n",sizeof(int));
	printf("char = %d\n",sizeof(char));
	printf("float = %d\n",sizeof(float));
	printf("double = %d\n",sizeof(double));
	printf("long double = %d\n",sizeof(long double));
	printf("=================\n");
	
	printf("Size Of Struct And Union\n");
	printf("========================\n");
	
	printf("struct = %d\n",sizeof(c_chk));
	printf("union = %d",sizeof(m_chk));
	return 0;
}

