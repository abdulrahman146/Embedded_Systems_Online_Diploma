/*
 ============================================================================
 Name        : Functions_Practice_4
 Author      : Abdulrahman_yasser
 Description : Clear a specified bit in a given number
 ============================================================================
 */

#include <stdio.h>

int clear(int num , int pos){

	num &= ~(1<<pos) ;

	return num;
}

int main(){

	int num , pos ;

	printf("Enter a number please :");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);
	printf("\nEnter position you want to clear : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&pos);

	printf("\nresult = %d",clear(num,pos));

	return 0;
}
