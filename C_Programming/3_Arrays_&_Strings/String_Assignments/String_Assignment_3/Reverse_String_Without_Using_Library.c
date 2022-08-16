/*
 ============================================================================
 Name        : String_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Reverse string without using library function except ( strlen )
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(){

	char string[100] ;
	int i ;

	printf("Please enter a string : ");
	fflush(stdin);  fflush(stdout);
	gets(string);

	printf("\n Reverse string is : ");

	for( i=strlen(string) ; i>=0 ; i-- ){
		printf("%c",string[i]);
	}

	return 0;
}
