/*
 ============================================================================
 Name        : C&L_Lab_6
 Author      : Abdulrahman_yasser
 Description : practice nested for loop
 ============================================================================
 */

#include<stdio.h>

int main(){

	int i , j ;

	for( i=0 ; i<10 ; i++ ){
		for( j=i ; j<10 ; j++ ){
			printf("%d ",j);
		}
		printf("\n");
	}

	return 0;
}
