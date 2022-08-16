/*
 ============================================================================
 Name        : Basics_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Printing an integer entered from user
 ============================================================================
 */

#include <stdio.h>

int main(){

	int x;

	printf("Please enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);
	printf("You entered : %d",x);

	return 0;
}
