#include <stdio.h>
int main(){
	
	int Number , Sum;
	
	for(Sum=0 ;;){
		printf("Enter the Number : ");
		scanf(" %d" , &Number);
		
		if(Number == 0){
			break;
		}
		else{
			Sum += Number;
			printf("------------------------\n");
		}
	}
	printf("The sum value for all the numbers is : %d\n" , Sum);
	return 0;
}
