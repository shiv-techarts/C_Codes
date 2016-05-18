/*

	#pragma startup <fn_name>
//executes fn_name

	#pragma exit <fn_name>
//executes fn_name before end of the program

	#pragma warn -rvl
//suppress the warning for returning a value

	#pragma warn -par
//suppress the warning of passing parameters

	#pragma warn -rch
//suppress the warning of non-reachable code by its directives

//Do not works in GNU Compiler.

*/

#include<stdio.h>

void fn1();
void fn2();

#pragma startup fn1
#pragma exit fn2

void fn1()
{
	printf("Welcome ");
}

void fn2()
{
	printf("the World!");
}

void main()
{
	printf("to ");
}
