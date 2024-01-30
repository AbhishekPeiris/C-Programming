// Switch Condition

#include <stdio.h>
int main(){
	
	int Number;
	
	printf("Enter the Number : ");
	scanf(" %d" , &Number);
	
	switch(Number){
		
		case 10:
			printf("Number is equals to 10\n");
			break;
		
		case 50:
			printf("Number is equals to 50\n");
			break;
		
		case 100:
			printf("Number is equals to 100\n");
			break;
		
		default:
			printf("Number is equals to 10 , 50 , 100");
		
		
	}
	
	return 0;
}
