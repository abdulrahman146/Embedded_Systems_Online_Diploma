/*
 ============================================================================
 Name        : C&L_Assignment_6
 Author      : Abdulrahman_yasser
 Description : Calculating sum of natural numbers
 ============================================================================
 */

#include <stdio.h>

int main(){

	int num , i , sum=0 ;

	printf("Please enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	for( i=num ; i>0 ; i-- ){
		sum += i ;
	}

	printf("Sum = %d\n",sum);

	return 0;
}
