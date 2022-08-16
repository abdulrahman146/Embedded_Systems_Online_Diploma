/*
 ============================================================================
 Name        : C&L_Assignment_8
 Author      : Abdulrahman_yasser
 Description : Simple calculator for two operands ( + , - , * , / )
 ============================================================================
 */

#include <stdio.h>

int main(){

	float x , y ;
	char operation ;

	while(1){

		printf("Please enter two numbers : ");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&x,&y);
		printf("Please select operation between ( + , - , * , / )\n");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&operation);

		switch(operation){
		case'+':
			printf("%f + %f = %f \n\n",x,y,x+y);
			break;
		case'-':
			printf("%f - %f = %f \n\n",x,y,x-y);
			break;
		case'*':
			printf("%f * %f = %f \n\n",x,y,x*y);
			break;
		case'/':
			printf("%f / %f = %f \n\n",x,y,x/y);
			break;
		default:
			printf("Invalid operation !!!\n\n");
		}
	}

	return 0;
}
