/*
 ============================================================================
 Name        : C&L_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Check whether character is vowel or consonant
 ============================================================================
 */

#include <stdio.h>

int main(){

	char x ;

	while(1){

		printf("Please enter a character : ");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&x);

		if(x=='a'||x=='A'||x=='o'||x=='O'||x=='u'||x=='U'||x=='i'||x=='I'||x=='e'||x=='E'){
			printf("Character %c is vowel\n",x);
		}
		else{
			printf("Character %c is consonant\n",x);
		}
	}

	return 0;
}
