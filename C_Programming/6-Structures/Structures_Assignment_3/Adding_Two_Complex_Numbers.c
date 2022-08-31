/*
 ============================================================================
 Name        : Structures_Assignment_3
 Author      : Abdulrahman_yasser
 Description : Adding two complex numbers with functions
 ============================================================================
 */

#include <stdio.h>

struct Scomplex{

	double real ;
	double imag ;
};

struct Scomplex readcomplex(char name[]){

	struct Scomplex c ;
	printf("Enter %s complex number : \n",name);
	fflush(stdin);  fflush(stdout);
	scanf("%lf %lf",&c.real,&c.imag);

	return c ;
}

struct Scomplex addcomplex(struct Scomplex a ,struct Scomplex b){

	struct Scomplex c ;
	c.real = a.real + b.real ;
	c.imag = a.imag + b.imag ;

	return c ;
}

void printcomplex(char name[], struct Scomplex c){

	printf("%s = (%.2lf) + (%.2lf)i \n",name,c.real,c.imag);
}

 int main(){

	 struct Scomplex x , y , z ;

	 x = readcomplex("1st");
	 y = readcomplex("2nd");
	 z = addcomplex(x,y);

	 printcomplex("sum",z);

	 return 0;
 }
