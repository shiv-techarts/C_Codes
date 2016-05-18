/*
This program is to find binary conversion of a decimal number.

By: Shiv Pratap Singh
Date: 02/01/16
*/

#include<stdio.h>
#include<math.h>

int main(void) {
//Declared Variables
	
	long int decimalNo = 0L , binaryNo[64] = {0};
	int i = 0;

//User Input

	printf("Enter any Decimal Number (Max: %d %s\n", (int)pow(2,64) , ")");
	scanf("%ld",&decimalNo);

//Code section for exception

	if(decimalNo > 2147483647 ) {
		printf("Sorry, Wrong Entry!\nProgram Will exit\n");
		return 1; //return with exit status 1
	}
	
//Finding Binary digits in reverse order	
	
	while(1) {
	//	printf("%d",decimalNo % 2); //Uncomment to check status {for Debuging}
		binaryNo[i++] = decimalNo % 2;		
		if(decimalNo == 0 || decimalNo == 1)
			break;
		decimalNo /= 2;
	}
	
//Printing bits in order	

	printf("Converted Binary is \n");
	while(--i >= 0) {
		printf("%ld",binaryNo[i]);
	}
	printf("\n");

//Return to OS	

	return 0;
}
