/*
 ============================================================================
 Name        : C&L_Lab_1
 Author      : Abdulrahman_yasser
 Description : Calculating circle area or circumference
 ============================================================================
 */
#include <stdio.h>

int main(){

	float radius , area , circumference ;
	char choice ;

	printf("Enter circle radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&radius);

	printf("Enter 'a' for area or 'c' for circumference : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);

	area = 3.14 * radius * radius ;
	circumference = 2 * 3.14 * radius ;

	if( choice == 'a' ){
		printf("area equals %f \n",area);
	}
	else if( choice == 'c' ){
		printf("circumference equals %f \n",circumference);
	}
	else{
		printf("wrong input !!! \n");
	}


	return 0;
}
