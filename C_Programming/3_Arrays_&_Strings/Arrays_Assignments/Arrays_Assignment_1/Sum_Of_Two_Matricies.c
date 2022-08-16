/*
 ============================================================================
 Name        : Arrays_Assignment_1
 Author      : Abdulrahman_yasser
 Description : Sum of two matrices 2x2
 ============================================================================
 */

#include <stdio.h>

int main(){

	int a[2][2] , b[2][2] , i , j ;

	printf("Please enter elements of first matrix ( a ) \n");

	for( i=0 ; i<2 ; i++ ){
		for( j=0 ; j<2 ; j++ ){
			printf("Please enter a[%d][%d] : ",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");
	printf("Please enter elements of second matrix ( b ) \n");

	for( i=0 ; i<2 ; i++ ){
		for( j=0 ; j<2 ; j++ ){
			printf("Please enter b[%d][%d] : ",i,j);
			fflush(stdin);  fflush(stdout);
			scanf("%d",&b[i][j]);
		}
	}

	printf("\n");
	printf("Sum of matrices is :\n");

	for( i=0 ; i<2 ; i++ ){
		for( j=0 ; j<2 ; j++ ){
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}

	return 0;
}
