/*
 ============================================================================
 Name        : C&L_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Largest number among three numbers
 ============================================================================
 */

#include <stdio.h>

int main(){

	float x , y , z ;

	printf("Please enter three numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);

	if( x>y && x>z ){
		printf("Largest number is : %f",x);
	}
	else if( y>x && y>z ){
		printf("Largest number is : %f",y);
	}
	else if( z>x && z>y ){
		printf("Largest number is : %f",z);
	}

	return 0;
}
