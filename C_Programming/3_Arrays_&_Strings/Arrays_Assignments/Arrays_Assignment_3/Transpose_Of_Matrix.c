/*
 ============================================================================
 Name        : Arrays_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Transpose of matrix
 ============================================================================
 */

#include <stdio.h>

int main(){

	int matrix[10][10] , i , j , k , x ;

	printf("Please enter num of rows and columns of the matrix : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&i,&j);

	printf(" \nEnter elements of matrix \n");
	for( k=0 ; k<i ; k++ ){
		for( x=0 ; x<j ; x++ ){
			printf("Please enter element matrix[%d][%d] : ",k,x);
			fflush(stdin);  fflush(stdout);
			scanf("%d",&matrix[k][x]);
		}
	}

	printf("\nEntered matrix is : \n");
	for( k=0 ; k<i ; k++ ){
		for( x=0 ; x<j ; x++ ){
			printf("%d\t",matrix[k][x]);
		}
		printf("\n");
	}

	printf("\nThe transpose of matrix is :\n");
	for( k=0 ; k<j ; k++ ){
		for( x=0 ; x<i ; x++ ){
			printf("%d\t",matrix[x][k]);
		}
		printf("\n");
	}

	return 0;
}
