/*
  Three Iteration Types
     1. for loop
     2. while loop
     3. do while loop
       
*/
#include <stdio.h>
int main(){
	
	int i = 0;
	
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	printf("Number %d\n" , i++);
	
	printf("\n");
	printf("***********************\n");
	
	//*******************************
	
	// for loop
	
	int n;
	
	for(n=0 ; n<=10 ; n++){
		
		printf("Number %d\n" , n);
	}
	
	
	return 0;
}
