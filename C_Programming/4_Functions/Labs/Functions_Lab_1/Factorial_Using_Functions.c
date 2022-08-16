/*
 ============================================================================
 Name        : Functions_Lab_1
 Author      : Abdulrahman_yasser
 Description : Calculate factorial using functions
 ============================================================================
 */

#include <stdio.h>

int factorial(int x){

	int f=1 ;

	for( ; x>0 ; x-- )
		f *= x ;

	return f ;
}

int main(){

	int y ;

	printf("Please enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&y);
	printf("\n Factorial of number %d is: %d",y,factorial(y));

	return 0;
}
