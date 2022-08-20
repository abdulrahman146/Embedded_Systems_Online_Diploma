/*
 ============================================================================
 Name        : Mid_Term_Problem_8
 Author      : Abdulrahman_yasser
 Description : Square root of number
 ============================================================================
 */

#include <stdio.h>

void root(int num){

	double root = 1;
	int i = 1;

	while (1){
		root = (num / root + root) / 2;
		if ( i == num + 1 )
			break;
		i++;
	}

	printf("The square root = %.3f",root);
}

int main(){

	int num;

	printf("Enter a Number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);

	root(num);

	return 0;
}
