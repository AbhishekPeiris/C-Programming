#include <stdio.h>
int main(void){
	
	int array[5];
	int i;
	
	for(i=0 ; i<5 ; i++){
		
		printf("Enter the value : ");
		scanf("%d" , &array[i]);
	}
	printf("\nElement\t\tValue\n");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%d\t\t%d\n" , i,array[i]);
	}
	
	return 0;
}