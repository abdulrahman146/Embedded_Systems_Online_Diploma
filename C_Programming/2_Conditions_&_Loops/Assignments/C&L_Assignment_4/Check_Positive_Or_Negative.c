/*
 ============================================================================
 Name        : C&L_Assignment_4
 Author      : Abdulrahman_yasser
 Description : Check whether number is positive or negative
 ============================================================================
 */

#include <stdio.h>

int main(){

	float num ;

	while(1){

		printf("Please enter number to be checked : ");
		fflush(stdin);  fflush(stdout);
		scanf("%f",&num);

		if( num > 0 ){
			printf("Number %.2f is positive\n",num);
		}
		else if( num < 0 ){
			printf("Number %.2f is negative\n",num);
		}
		else{
			printf("Number is zero\n");
		}
	}

	return 0;
}
