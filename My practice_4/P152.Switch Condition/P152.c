#include <stdio.h>
int main(){
	
	int Number;
	
	printf("Enter the Number(Between 1 to 10) : ");
	scanf(" %d" , &Number);
	
	switch(Number){
		
		case 1:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 3:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 5:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 7:{
			printf("The Number is %d\n" , Number);
			break;
		}
		case 19:{
			printf("The Number is %d\n" , Number);
			break;
		}
		default:{
			printf("Only Odd Numbers are Valid\n");
			break;
		}
	}
	return 0; 
}
