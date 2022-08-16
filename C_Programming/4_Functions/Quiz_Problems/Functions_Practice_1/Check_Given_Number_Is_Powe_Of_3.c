/*
 ============================================================================
 Name        : Functions_Practice_1
 Author      : Abdulrahman_yasser
 Description : Check a given number is power of 3
 ============================================================================
 */

#include <stdio.h>

int check(int x){

	if( x%3 == 0 )
		return 0;
	else
		return 1;
}

int main(){

	int num ;

	printf("Please enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	if( check(num) == 0 ){
		printf("Number is power of 3");
	}
	else
		printf("Number is not a power of 3");


	return 0;
}
