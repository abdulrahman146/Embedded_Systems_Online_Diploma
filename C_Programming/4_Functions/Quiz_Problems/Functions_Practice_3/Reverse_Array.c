/*
 ============================================================================
 Name        : Functions_Practice_3
 Author      : Abdulrahman_yasser
 Description : reverse an input array
 ============================================================================
 */

#include <stdio.h>

void reverse(int x[100] , int y){

	int i ;

	for( i=y-1 ; i>=0 ; i-- ){
		printf("%d ",x[i]);
	}
}

int main(){

	int arr[100] , size , i ;

	printf("Please enter size of the array : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&size);

	printf("\nEnter elements of the array\n");

	for( i=0 ; i<size ; i++ ){
		printf("Enter element [%d] : ",i);
		fflush(stdin);  fflush(stdout);
		scanf("%d",&arr[i]);
	}

	printf("\nYou entered : ");

	for( i=0 ; i<size ; i++ ){
		printf("%d ",arr[i]);
	}

	printf("\nThe reverse of array is : ");

	reverse(arr,size);

	return 0;
}
