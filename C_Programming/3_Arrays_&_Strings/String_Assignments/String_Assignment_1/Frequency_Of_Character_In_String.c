/*
 ============================================================================
 Name        : String_Assignment_1
 Author      : Abdulrahman_yasser
 Description : Find frequency of a character in a string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(){

	char string[100] , x , frequency=0 ;
	int i ;

	printf("Please enter a string : ");
	fflush(stdin);  fflush(stdout);
	gets(string);
	printf("\nEnter a character to find its frequency : ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);

	for( i=0 ; i<strlen(string) ; i++ ){
		if(string[i] == x){
			frequency += 1 ;
		}
	}

	printf("\nFrequency of %c is : %d",x,frequency);

	return 0;
}
