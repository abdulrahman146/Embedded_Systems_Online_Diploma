/*
 ============================================================================
 Name        : Mid_Term_Problem_6
 Author      : Abdulrahman_yasser
 Description : Reverse array elements
 ============================================================================
 */

#include <stdio.h>

void reverse(int arr[100] , int n){

	int i ;

	 printf("\n The reversed array is : ");
		 for( i=n-1 ; i>=0 ; i-- ){
			 printf("%d ",arr[i]);
		 }
}

 int main(){

	 int n , i , arr[100] ;

	 printf("Please enter number of elements : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%d",&n);
	 printf("Enter elements:\n");

	 for( i=0 ; i<n ; i++ ){
		 fflush(stdin); fflush(stdout);
		 scanf("%d",&arr[i]);
	 }

	 printf("\n The array is : ");
	 for( i=0 ; i<n ; i++ ){
		 printf("%d ",arr[i]);
	 }

	 reverse(arr,n);

	 return 0;
 }
