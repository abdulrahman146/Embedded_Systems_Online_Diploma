/*
 ============================================================================
 Name        : C&L_Assignment_5
 Author      : Abdulrahman_yasser
 Description : Check a character is alphabet or not
 ============================================================================
 */

#include <stdio.h>

int main(){

	char x ;

	while(1){

		printf("Please enter a character you want to check : ");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&x);

		if( (x >='a' && x <='z') || (x >='A' && x <='Z') ){
			printf("%c is an alphabet \n",x);
		}
		else{
			printf("%c is not an alphabet \n",x);
		}
	}

	return 0;
}
