/*
 ============================================================================
 Name        : Arrays_Assignment_5
 Author      : Abdulrahman_yasser
 Description : Search for an element in an array
 ============================================================================
 */

#include <stdio.h>

int main(){

	int n , arr[10] , i , element ;

	printf("Please enter number of elements : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	printf(" \nEnter elements : \n");
	for( i=0 ; i<n ; i++ ){
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("\nEnter the element to be searched : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&element);

	for( i=0 ; i<n ; i++ ){
		if( arr[i] == element ){
			printf("\nNumber found at the location : %d",i+1);
		}
	}

	return 0;
}
