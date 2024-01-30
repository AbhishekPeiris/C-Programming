// Find the max value

#include <stdio.h>
int main(){
	
	int Number01 , Number02 , Number03 , HighestNumber;
	
	printf("Enter Number 01 : ");
	scanf(" %d" , &Number01);
	
	printf("Enter Number 02 : ");
	scanf(" %d" , &Number02); 
	
	printf("Enter Number 03 : ");
	scanf(" %d" , &Number03);
	
	// Comparison of Number01 and Number02
	
	if(Number01 > Number02){
		HighestNumber = Number01;
	}
	else{
		HighestNumber = Number02;
	}
	
	// Highest number between 1 and 2 and compare Number03
	
	if(HighestNumber < Number03){
		HighestNumber = Number03;	
	}
	
	// Print the highest Number
	
	printf("The max value is : %d" , HighestNumber);
	 
	return 0; 
}
   
