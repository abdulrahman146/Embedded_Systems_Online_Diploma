/*
 ============================================================================
 Name        : Basics_Assignment_5
 Author      : Abdulrahman_yasser
 Description : Finding ASCII value of a character
 ============================================================================
 */

#include <stdio.h>

int main(){

	char x ;

	printf("Please enter a character : ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	printf("Ascii value of %c = %d\n",x,x);

	return 0;
}
