/*
 ============================================================================
 Name        : Mid_Term_Problem_9
 Author      : Abdulrahman_yasser
 Description : Reverse word in string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int main(){

	char str[100] , container[100];
	int i , j , x=0 ;

	printf("Please enter a string : ");
	fflush(stdin);  fflush(stdout);
	gets(str);

	printf("The reverse is : ");

	for( i=strlen(str)-1 ; i>=0 ; i-- ){
		if( str[i]==' ' ){
			for( j=x-1 ; j>=0 ; j--){
				printf("%c",container[j]);
			}
			printf(" ");
			x=0;
		}
		else{
			container[x]=str[i];
			x++;
		}
	}

	if( x != 0 ){
		for( j=x-1 ; j>=0 ; j-- ){
			printf("%c",container[j]);
		}
	}


	return 0;
}
