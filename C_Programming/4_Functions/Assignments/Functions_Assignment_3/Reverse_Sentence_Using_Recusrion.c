/*
 ============================================================================
 Name        : Functions_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Reverse a sentence using a recursion
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverse(){

	char c ;

	scanf("%c",&c);

	if(c != '\n'){
		reverse();
		printf("%c",c);
	}

}

int main(){

	printf("Please enter a sentence : ");
	fflush(stdin);  fflush(stdout);

	reverse();

	return 0;
}
