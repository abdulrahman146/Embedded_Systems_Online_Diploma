/*
 ============================================================================
 Name        : Mid_Term_Problem_2
 Author      : Abdulrahman_yasser
 Description : Prime numbers between two numbers
 ============================================================================
 */

#include <stdio.h>

int prime(int num){

	int j , temp=0 ;

	for( j=2 ; j<=num/2 ; j++ ){
		if(num%j == 0){
			temp = 1 ;
			break;
		}
	}

	return temp;
}

int main(){

	int a , b , num , temp ;

	printf("Please enter two numbers (intervals) : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("\n prime numbers between (%d) and (%d) are : ",a,b);

	for( num=a+1 ; num<b ; num++ ){
		temp = prime(num);
		if( temp == 0 )
			printf("%d ",num);
	}

	return 0;
}
