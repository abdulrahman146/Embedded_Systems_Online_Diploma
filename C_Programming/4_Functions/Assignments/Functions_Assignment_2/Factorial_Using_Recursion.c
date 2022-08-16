/*
 ============================================================================
 Name        : Functions_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Calculate Factorial using recursion
 ============================================================================
 */

#include <stdio.h>

int fac(int i , int factorial){

	if( i > 0 ){
		factorial *= i ;
		i-- ;
		factorial = fac(i,factorial) ;
	}

	return factorial;
}

int main(){

	int x , factorial=1 ;

	printf("Please enter a positive integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	printf("\n Factorial of number %d is : %d",x,fac(x,factorial));

	return 0;
}
