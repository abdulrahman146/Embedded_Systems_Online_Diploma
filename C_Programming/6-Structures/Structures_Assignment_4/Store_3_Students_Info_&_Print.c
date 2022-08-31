/*
 ============================================================================
 Name        : Structures_Assignment_4
 Author      : Abdulrahman_yasser
 Description : Store 3 students info and print them
 ============================================================================
 */

#include <stdio.h>

 struct Sstudent{

	char name[20];
	int roll;
	float marks;
};

 int main(){

	 struct Sstudent s[10] ;
	 int i;

	 for( i=0 ; i<3 ; i++ ){
	 printf("\nEnter student %d information : \n",i);
	 printf("Enter name : ");
	 fflush(stdin);  fflush(stdout);
	 gets(s[i].name);
	 printf("Enter roll : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%d",&s[i].roll);
	 printf("Enter marks : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%f",&s[i].marks);
	 }

	 for( i=0 ; i<3 ; i++ ){
	 printf("\n Displaying information : \nfor student %d\n Name: %s \n roll: %d \n marks: %.2f\n",i,s[i].name,s[i].roll,s[i].marks);
	 }

	 return 0;
 }
