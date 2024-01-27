#include <stdio.h>
int main(void){
	
	int number1 , number2;
	
	printf("Enter the 1st number : ");
	scanf("%d" , &number1);
	
	printf("Enter the 2nd number : ");
	scanf("%d" , &number2);
	
	if(number1 >= number2){
		
		printf("The largest number is number 1 (%d)" , number1);
	}
	else{
		
		printf("The largest number is number 2 (%d)" , number2);
	}
	
	return 0;
}