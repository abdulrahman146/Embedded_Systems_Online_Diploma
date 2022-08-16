/*
 ============================================================================
 Name        : Arrays_Assignment_4
 Author      : Abdulrahman_yasser
 Description : Insert an element in an array
 ============================================================================
 */

#include <stdio.h>

int main(){

	int arr[10] , element , location , n , i ;

	printf("Please enter number of elements : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);

	printf("\nEnter elements :\n");
	for( i=0 ; i<n ; i++ ){
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("\nEnter element to be inserted : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&element);

	printf("\n Enter the location : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&location);


	for( i=n ; i>=location ; i-- ){
		arr[i] = arr[i-1] ;
	}

	n++ ;
	arr[location-1] = element ;

	for( i=0 ; i<n ; i++ ){
		printf("%d  ",arr[i]);
	}

	return 0;
}
