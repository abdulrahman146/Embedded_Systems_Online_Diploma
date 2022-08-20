/*
 ============================================================================
 Name        : Mid_Term_Problem_5
 Author      : Abdulrahman_yasser
 Description : Sum numbers from 1 to 100 without loop
 ============================================================================
 */

#include <stdio.h>

int sum_nums(){

	static int i=0 , sum=0 ;

	if( i>=0 && i<=100 ){
		sum += i ;
		i++ ;
		sum_nums();
	}

	return sum;
}

 int main(){

	 printf("Sum of numbers from 1 to 100 = %d",sum_nums());

	 return 0;
 }
