#include <stdio.h>
int main(){
	
	int num1 = 10;
	int num2;
	
	
	printf("Enter your 2nd number : ");
	scanf("%d" , &num2);
	
	if(num1 >= num2)
		printf("The largest number is num1");
	
	else
		printf("The largest number is num2");
	
	
	return 0;
	
}