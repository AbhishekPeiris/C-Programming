#include <stdio.h>
int main(){
	
	int Number;
	char Word[] = "Invalid";
	
	printf("Enter the Number (1 or 2 or 3):= ");
	scanf(" %d" , &Number);
	
	switch(Number){
		
		case 1:{
			printf("The Number is %d" , Number);
			break;
		}
		case 2:{
			printf("The Number is %d" , Number);
			break;
		}
		case 3:{
			printf("The Number is %d" , Number);
			break;
		}
		default:{
			printf("The Number is %s" , Word);
			break;
		}
	}
	
	return 0;
}
