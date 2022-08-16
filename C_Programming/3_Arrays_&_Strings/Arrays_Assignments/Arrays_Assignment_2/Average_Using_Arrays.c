/*
 ============================================================================
 Name        : Arrays_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Calculate average using arrays
 ============================================================================
 */

#include <stdio.h>

int main(){

	float arr[100] , sum=0 , average=1 ;
	int i , j ;

	printf("Please enter number of data : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&j);
	printf("\n");

	for( i=0 ; i<j ; i++ ){
		printf("Please enter number (%d) : ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&arr[i]);
		sum += arr[i];
	}

	average = sum/j;
	printf("\n Average of numbers is %.2f",average);

	return 0;
}
