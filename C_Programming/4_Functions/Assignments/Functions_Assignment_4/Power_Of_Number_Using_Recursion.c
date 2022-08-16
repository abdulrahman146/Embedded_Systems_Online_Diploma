/*
 ============================================================================
 Name        : Functions_Assignment_4
 Author      : Abdulrahman_yasser
 Description : Calculate power of number using recursion
 ============================================================================
 */

#include <stdio.h>

int power(int num , int exp){

	if( exp != 0 ){
		return (num*power(num,exp-1));
	}
	else
		return 1;
}

int main(){

	int num , exp ;

	printf("Enter base number please : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);
	printf("\n Enter power number please ( positive integer ) : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&exp);
	printf("\n %d ^ %d = %d",num,exp,power(num,exp));

	return 0;
}
