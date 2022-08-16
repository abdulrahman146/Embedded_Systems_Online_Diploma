/*
 ============================================================================
 Name        : Basics_Assignment_4
 Author      : Abdulrahman_yasser
 Description : Multiplying two floating point numbers
 ============================================================================
 */

#include <stdio.h>

int main(){

	float x , y , product=0.0 ;

	printf("Please enter two numbers : ");
	fflush(stdin);  fflush(stdout);
	scanf("%f %f",&x,&y);

	product = x * y ;

	printf("Product of two numbers = %.3f",product);

	return 0;
}
