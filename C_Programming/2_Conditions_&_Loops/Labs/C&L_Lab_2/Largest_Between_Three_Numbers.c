/*
 ============================================================================
 Name        : C&L_Lab_2
 Author      : Abdulrahman_yasser
 Description : Largest number between 3 numbers
 ============================================================================
 */
#include <stdio.h>

int main(){

	int a , b , c ;

	printf("Please enter 3 numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d",&a,&b,&c);

	if( a>b && a>c ){
		printf("The largest number is: %d \n",a);
	}
	else if( b>a && b>c ){
		printf("The largest number is: %d \n",b);
	}
	else if( c>a && c>b ){
		printf("The largest number is: %d \n",c);
	}
	else{
		printf("There are similar numbers !! \n");
	}


	return 0;
}
