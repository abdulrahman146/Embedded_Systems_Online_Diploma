/*
 ============================================================================
 Name        : Basics_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Adding two integers
 ============================================================================
 */

#include <stdio.h>

int main(){

	int x , y , sum=0 ;

	printf("Please enter two integers : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&x,&y);

	sum = x + y ;

	printf("Sum = %d\n",sum);

	return 0;
}
