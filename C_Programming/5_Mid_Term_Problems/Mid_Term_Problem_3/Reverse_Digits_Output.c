/*
 ============================================================================
 Name        : Mid_Term_Problem_3
 Author      : Abdulrahman_yasser
 Description : Function to reverse digits in a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int num){

	int   i , j ;
	char str1[100] , str2[100] ;

	itoa(num,str1,10);


	for( i=strlen(str1)-1 , j=0 ; i>=0 ; i-- , j++){
		str2[j]=str1[i];
	}
	str2[j]=0;

	return atoi(str2);

}

int main(){

	int num ;

	printf("Please enter a number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	printf("The number in digits reversed is : %d",reverse(num));

	return 0;

}
