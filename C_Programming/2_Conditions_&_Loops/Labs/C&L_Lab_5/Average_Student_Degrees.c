/*
 ============================================================================
 Name        : C&L_Lab_5
 Author      : Abdulrahman_yasser
 Description : Calculate the average of students degrees
 ============================================================================
 */

#include<stdio.h>

int main(){

	int n , i ;
	float degree , average , sum=0 ;

	printf("Please enter number of students : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for( i=1 ; i<=n ; i++ ){
		printf("Enter the student (%d) degree : ",i);
		fflush(stdin); fflush(stdout);
		scanf("%f",&degree);
		sum += degree ;
	}

	average = sum/n ;

	printf("The average is: %f \n",average);

	return 0;
}
