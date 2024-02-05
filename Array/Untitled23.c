#include <stdio.h>

int main(void){
	
	int count[10];
	int i=0,max;
	
	printf("Input the number (10-100): ");
	scanf("%d" , &count[i]);
	
	max = count[i];
	
	for(i=1; i<9 ; i++){
		
		printf("Input the number (10-100): ");
		scanf("%d" , &count[i]);
			
		if(max<count[i]){
			
			max = count[i];
		}
	}
	printf("\nMaximam number is : %d" , max);
	
	return 0;
}