/*
 ============================================================================
 Name        : C&L_Lab_3
 Author      : Abdulrahman_yasser
 Description : Minimum of two numbers using inline condition
 ============================================================================
 */
#include<stdio.h>

int main(){

	int a , b ;

	printf("Please enter two numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("The minimum number is %d \n",(a<b)?a:b);

	return 0;
}
