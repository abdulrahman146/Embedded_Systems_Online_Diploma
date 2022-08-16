/*
 ============================================================================
 Name        : Functions_Lab_2
 Author      : Abdulrahman_yasser
 Description : Practicing calling a function
 ============================================================================
 */

#include <stdio.h>

void func(void){

	int i , j ;

	for( i=0 ; i<=9 ; i++ ){
		for( j=i ; j<=9 ; j++ ){
			printf("%d ",j);
		}
		printf("\n");
	}

}

int main(){

	func();

	return 0;
}
