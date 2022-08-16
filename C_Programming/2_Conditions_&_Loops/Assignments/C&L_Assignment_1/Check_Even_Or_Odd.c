/*
 ============================================================================
 Name        : C&L_Assignment_1
 Author      : Abdulrahman_yasser
 Description : Check whether number is even or odd
 ============================================================================
 */

#include <stdio.h>

int main(){

	int i ;

	while(1){

		printf("Please enter an integer you want to check : ");
		fflush(stdin);  fflush(stdout);
		scanf("%d",&i);

		if( i%2 == 0 ){
			printf("%d is even\n",i);
		}
		else{
			printf("%d is odd\n",i);
		}
	}

	return 0;
}

