/*
 ============================================================================
 Name        : Functions_Practice_5
 Author      : Abdulrahman_yasser
 Description : Swapping two arrays with different size
 ============================================================================
 */

#include <stdio.h>

void swap(int arr1[10] , int arr2[10] , int temp[10] ,  int x , int y){

	int i ;

	for( i=0 ; i<(x>y?x:y) ; i++ ){
		temp[i]=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp[i];
	}

	printf("\n After swapping :\n array 1 is : ");

	for( i=0 ; i<y ; i++ ){
		printf("%d ",arr1[i]);
	}

	printf("\n array 2 is : ");

	for( i=0 ; i<x ; i++ ){
		printf("%d ",arr2[i]);
	}

}

int main(){

	int arr1[10] , arr2[10] , temp[10] , x , y , i ;

	printf("Please enter size of array 1 : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&x);

	printf("Enter array 1 elements : ");
	fflush(stdin);  fflush(stdout);

	for( i=0 ; i<x ; i++ ){
		scanf("%d",&arr1[i]);
	}

	printf("Please enter size of array 2 : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&y);

	printf("Enter array 2 elements : ");
	fflush(stdin);  fflush(stdout);

	for( i=0 ; i<y ; i++ ){
		scanf("%d",&arr2[i]);
	}

	swap(arr1,arr2,temp,x,y);

	return 0;
}
