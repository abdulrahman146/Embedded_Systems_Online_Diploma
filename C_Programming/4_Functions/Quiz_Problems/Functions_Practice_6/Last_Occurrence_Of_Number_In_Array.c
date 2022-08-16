/*
 ============================================================================
 Name        : Functions_Practice_6
 Author      : Abdulrahman_yasser
 Description : Last occurrence of number in a given array
 ============================================================================
 */

#include <stdio.h>

int last_occurrence(int arr[10],int size , int num){

	int i , flag=-1 ;

	for( i=0 ; i<size ; i++ ){
		if(arr[i]==num)
			flag = i ;
	}

	if( flag == -1 )
		return -1 ;
	else
		return flag ;
}

int main(){

	int size , i , arr[10] , num ;

	printf("Please enter size of array : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&size);

	printf("Enter elements of the array :\n");
	fflush(stdin);  fflush(stdout);

	for(i=0 ; i<size ; i++){
		scanf("%d",&arr[i]);
	}

	printf("Enter the number : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num);

	printf("Result is : %d ",last_occurrence(arr,size,num));

	return 0;
}
