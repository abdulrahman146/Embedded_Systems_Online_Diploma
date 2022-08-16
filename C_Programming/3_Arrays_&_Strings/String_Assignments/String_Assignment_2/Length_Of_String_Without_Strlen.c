/*
 ============================================================================
 Name        : String_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Find length of a string without using ( strlen )
 ============================================================================
 */

#include <stdio.h>

int main(){

	char string[100] ;
	int i , length ;

	printf("Please enter a string : ");
	fflush(stdin);  fflush(stdout);
	gets(string);

	for( i=0 ; string[i]!=0 ; i++ );

	length = i ;

	printf("\n Length = %d",length);

	return 0;
}
