/*
 ============================================================================
 Name        : Mid_Term_Problem_7
 Author      : Abdulrahman_yasser
 Description : Unique number with one loop
 ============================================================================
 */

#include <stdio.h>

int unique_num(int arr[],int size){

	int x=0 , i ;

	for( i=0 ; i<size ; i++)
		x ^= arr[i];

	return x;
}

 int main(){

	 int i;
	 int arr[]={4,2,5,2,5,7,4};
	 int size = sizeof(arr)/sizeof(arr[0]);

	 printf("The array is : ");
	 for( i=0 ; i<size ; i++)
		 printf("%d ",arr[i]);

	 printf("\n The unique number is : %d",unique_num(arr,size));

	 return 0;
 }
