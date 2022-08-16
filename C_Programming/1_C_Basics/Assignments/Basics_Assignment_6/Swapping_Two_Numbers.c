/*
 ============================================================================
 Name        : Basics_Assignment_6
 Author      : Abdulrahman_yasser
 Description : Swapping two numbers
 ============================================================================
 */

#include <stdio.h>

int main(){

	int x , y , temp=0 ;

	printf("Please enter value of x : " );
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	printf("Please enter value of y : " );
	fflush(stdin);  fflush(stdout);
	scanf("%d",&y);

	temp = x ;
	x = y ;
	y = temp ;

	printf("After swapping : x = %d\n",x );
	printf("After swapping : y = %d\n",y );

	return 0;
}
