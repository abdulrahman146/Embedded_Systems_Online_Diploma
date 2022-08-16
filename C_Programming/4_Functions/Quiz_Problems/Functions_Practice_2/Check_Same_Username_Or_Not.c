/*
 ============================================================================
 Name        : Functions_Practice_2
 Author      : Abdulrahman_yasser
 Description : check the same username or not
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int compare(char x[100],char y[100]){

	if( strcmp(x,y) == 0 )
		printf("\n Valid");
	else
		printf("\n Invalid");


	return 0;
}

int main(){

	char arr1[100] , arr2[100] ;

	printf("Please set a username : ");
	fflush(stdin);  fflush(stdout);
	gets(arr1);
	printf("\nPlease enter username : ");
	fflush(stdin);  fflush(stdout);
	gets(arr2);

	compare(arr1,arr2);

	return 0;
}
