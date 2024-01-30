#include <stdio.h>
int main(){
	
	int Valid_Number;
	
	printf("Enter the Valid Number : ");
	scanf(" %d" , &Valid_Number);
	
	switch(Valid_Number){
		
		case 10:
			printf("The Valid Number is 10\n");
			break;
		case 15:
			printf("The Valid Number is 15\n");
			break;
		case 20:
			printf("The Valid Number is 20\n");
			break;
		default:
			printf("The Valid NUmber are 10 , 15 and 20");
			
	}
	return 0;
}
