#include<stdio.h>
#include<string.h>

typedef struct student1
{
	int id1;
	char name1[20];
	float marks1;
}stu1;

typedef struct student2
{
	int id2;
	char name2[20];
	float marks2;
	stu1 call;
}stu2;

int main()
{
	stu2 record2 = {2,"Singh",60,1,"Shiv",75.5};
	stu2 *ptr2 = &record2;
	stu1 record1;
	stu1 *ptr1 = &record1;

	/* Changes in record2 will not effect real values of record1*/
//	record2 = record1;
//	strcpy(record2.name1,record1.name1);	

	printf("record2\n%d\n",record2.call.id1);
	printf("record2\n%s\n",record2.call.name1);
	printf("record1\n%s\n",record1.id1);
	printf("record1\n%s",record1.name1);
	return 0;
}