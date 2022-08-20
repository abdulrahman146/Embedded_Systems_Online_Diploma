/*
 ============================================================================
 Name        : Mid_Term_Problem_10
 Author      : Abdulrahman_yasser
 Description : Max ones between two zeros
 ============================================================================
 */

#include <stdio.h>

int max_ones(int num){

	int count = 0 ;

	while( num != 0 ){
		num = ( num & (num<<1) );
		count ++ ;
	}

	return count;
}

 int main(){

	 int num ;

	 printf("Please enter a number : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%d",&num);

	 printf("Max ones in this number are : %d ",max_ones(num));

	 return 0;
 }
