/*
 ============================================================================
 Name        : Arrays_Lab_1
 Author      : Abdulrahman_yasser
 Description : Store and print 5 student degrees
 ============================================================================
 */

#include <stdio.h>

int main(){

	int i ;
	float degrees[5] ;

	for( i=0 ; i<5 ; i++ ){
		printf("Please enter student %d degree : ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&degrees[i]);
		printf("\n");
	}

	for( i=0 ; i<5 ; i++ ){
		printf("Student %d degree is : %.2f\n",i+1,degrees[i]);
	}

	return 0;
}
