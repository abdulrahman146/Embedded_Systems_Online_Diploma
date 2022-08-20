/*
 ============================================================================
 Name        : Mid_Term_Problem_1
 Author      : Abdulrahman_yasser
 Description : Function to take number and sum all digits
 ============================================================================
 */

#include <stdio.h>

int sum_digits(int num){

	int x , sum=0 ;

	while( num != 0 ){
		x = num%10 ;
		sum += x ;
		num = num/10;
	}

	return sum;
}


int main(){

	int num ;

	printf("Please enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	printf("Sum of digits = %d ",sum_digits(num));

	return 0;
}
