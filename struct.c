#include<stdio.h>

struct types {
	int a;
	char b;
	
};

union simtypes {
	int a;
	char b;
	
};

union addtypes {
	char c;
	struct types s2;
};

int main(void) {
	struct types s1;
	union addtypes s3;
	union addtypes s5;
	union simtypes s4;
	char ch = 0x9f;
	printf("s3 = %p, s5 = %p",s3,s5);
	printf("\nSize of struct is %d Bytes",sizeof(s1));
	printf("\nSize of union is %d Bytes",sizeof(s3));
	printf("\nSize of similar union is %d Bytes",sizeof(s4));
	s4.a = 0;
	s4.b = '\0';
	s4.a = 0x7fffffff;
	printf("\nChar Value %c",ch);
	printf("\nValue of s4.a = %0x = %d = %d",s4.a,s4.a,sizeof(s4.a));
	printf("\nValue of s4.b = %0x = %d = %c = %d",s4.b,s4.b,s4.b,sizeof(s4.b));
	return 0;
}