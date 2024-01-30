#include <stdio.h>
int main(){
	
	int Number;
	
	printf("Enter the Number is(Between 1 to 5) : ");
	scanf(" %d" , &Number);
	
	switch(Number){
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:{
			printf("The Number is %d or %d or %d or %d or %d\n" , 1,2,3,4,5);
			break;
		}
		default:{
			printf("The Number is Invalid");
			break;
		}	
	}
	return 0;
}
