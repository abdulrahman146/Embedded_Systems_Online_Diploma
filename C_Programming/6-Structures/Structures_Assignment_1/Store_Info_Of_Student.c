/*
 ============================================================================
 Name        : Structures_Assignment_1
 Author      : Abdulrahman_yasser
 Description : Store information of student
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

struct Sstudent{

	char name[20];
	int roll;
	float marks;
};

 int main(){

	 struct Sstudent s ;

	 printf("Enter student information : \n");
	 printf("Enter name : ");
	 fflush(stdin);  fflush(stdout);
	 gets(s.name);
	 printf("Enter roll : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%d",&s.roll);
	 printf("Enter marks : ");
	 fflush(stdin);  fflush(stdout);
	 scanf("%f",&s.marks);

	 printf("\n Displaying information : \n Name: %s \n roll: %d \n marks: %.2f",s.name,s.roll,s.marks);

	 return 0;
 }
