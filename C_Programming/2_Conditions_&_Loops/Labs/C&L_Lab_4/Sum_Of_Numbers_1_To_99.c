/*
 ============================================================================
 Name        : C&L_Lab_4
 Author      : Abdulrahman_yasser
 Description : Calculate summation of numbers between 1 & 99
 ============================================================================
 */
#include <stdio.h>

int main(){

	int i , sum=0 ;

	for( i=1 ; i<100 ; i++ ){
		sum = sum + i ;
	}

	printf("The summation is : %d \n",sum);

	return 0;
}
