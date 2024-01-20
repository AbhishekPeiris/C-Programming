#include <stdio.h>

int main(void){
	
	int numArr[6] = {0};
	int i;
	int number_even[6],number_odd[6];
	
	printf("Input number : ");
	scanf("%d" , &numArr[i]);

	
	for(i=0 ; i<=5 ;){
		
		
		if(numArr[i]%2 == 0){
			
			number_even[i] = numArr[i];
			
		}
		if(numArr[i]%2 != 0){
			
			number_odd[i] = numArr[i];
			
		}
		
		i++;
		
		printf("Input number : ");
		scanf("%d" , &numArr[i]);

		
	}
	
	printf("\n\n");
	
	for(i=0 ; i<=5 ; i++){
		
		if(numArr[i]%2 == 0){
	
			printf("Even number : %d\n" , number_even[i]);
		}
		else if(numArr[i]%2 != 0){
			
			printf("Odd number : %d\n" , number_odd[i]);
		}
	}
	
	return 0;
	
}
	
	 