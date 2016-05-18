#include<stdio.h>
#include<math.h>

int userCh[3][3] = { {0,0,0},{0,0,0},{0,0,0}};
//int identity[3][3] =  { {0,0,0},{0,0,0},{0,0,0}};
//int temp[3][3] =  { {0,0,0},{0,0,0},{0,0,0}};

int check() {
	int iR = 0,jR = 0;
	
	iR = rand()%3;
	jR = rand()%3;
	//printf("\nVAl= %d\t%d\n",iR,jR);
	
	if(userCh[iR][jR] == 1 || userCh[iR][jR] == 2) {
		check();
	} else {
		//printf("\nVAl IN= %d\t%d\n",iR,jR);
		userCh[iR][jR] = 2;
		return 1;
	}
}

int main () {
	
	int i,j,flag = 0, index = 0;
	
	while(index < 5) {
		
	flag = 0;
	
	printf("\nEnter\n");
	scanf("%d\t%d",&i,&j);
	
	if(userCh[i][j] == 1 || userCh[i][j] == 2)
		printf("Already Occupied");
	else
		userCh[i][j] = 1;

	
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0; j < 3 ; j++ ) {
			if(!(userCh[i][j] == 1) || !(userCh[i][j] == 2))
				flag = check();
			if(flag)
				break;
		}
		if(flag)
			break;
	}
	
	for(i = 0 ; i < 3 ; i++) {
		for(j = 0; j < 3 ; j++ ) {
			printf("%d",userCh[i][j]);
		}
		printf("\n");
	}
	
	index++;
	
	}

	return 0;
}