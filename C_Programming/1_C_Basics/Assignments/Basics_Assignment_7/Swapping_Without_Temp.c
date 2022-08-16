/*
 ============================================================================
 Name        : Basics_Assignment_7
 Author      : Abdulrahman_yasser
 Description : Swapping two numbers without temp variable
 ============================================================================
 */

#include <stdio.h>

int main(){

	int x , y ;

	printf("Please enter value of x : " );
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	printf("Please enter value of y : " );
	fflush(stdin);  fflush(stdout);
	scanf("%d",&y);

	x += y ;
	y = x-y ;
	x = x-y ;

	printf("After swapping : x = %d\n",x );
	printf("After swapping : y = %d\n",y );

	return 0;
}
