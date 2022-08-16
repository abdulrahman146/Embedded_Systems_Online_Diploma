/*
 ============================================================================
 Name        : C&L_Assignment_7
 Author      : Abdulrahman_yasser
 Description : Find factorial of a number
 ============================================================================
 */

#include <stdio.h>

int main(){

	int num , i ;

	while(1){

		int factorial=1 ;

		printf("Please enter an integer : ");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&num);

		if( num==0 ){
			printf("factorial = 1\n");
		}
		else if( num<0 ){
			printf("Invaild input, Please enter positive integer !!\n");
		}
		else{
			for( i=num ; i>0 ; i-- ){
				factorial *= i ;
			}
			printf("factorial = %d\n",factorial);
		}
	}

	return 0;
}
