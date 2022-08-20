/*
 ============================================================================
 Name        : Mid_Term_Problem_4
 Author      : Abdulrahman_yasser
 Description : Count number of ones in binary number
 ============================================================================
 */

#include <stdio.h>

int count(int num){

	int counter=0;

	while( num != 0){
		if( num % 2 != 0)
			counter += 1;
		num = num/2;
	}

	return counter;
}

int main(){

	int num ;

	printf("Please enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	printf("Number of ones in its binary is : %d",count(num));

	return 0;
}
