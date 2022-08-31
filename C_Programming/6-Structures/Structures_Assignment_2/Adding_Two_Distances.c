/*
 ============================================================================
 Name        : Structures_Assignment_2
 Author      : Abdulrahman_yasser
 Description : Adding two distances ( inch - feet )
 ============================================================================
 */

#include <stdio.h>

struct Sdistance{

	float inch ;
	int feet ;
};

int main(){

	struct Sdistance d1 , d2 , sum ;

	printf("For first distance : \n");

	printf("Inch = ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&d1.inch);
	printf("Feet = ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&d1.feet);

	printf("\nFor second distance : \n");

	printf("Inch = ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&d2.inch);
	printf("Feet = ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&d2.feet);

	sum.inch = d1.inch + d2.inch ;
	sum.feet = d1.feet + d2.feet ;

	if( sum.inch > 12.0 ){
		sum.inch -= 12.0 ;
		sum.feet++;
	}

	printf("\nSum of distances = %d_%.2f",sum.feet,sum.inch);

	return 0;
}
