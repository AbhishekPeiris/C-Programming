#include <stdio.h>
#define SIZE 5

int main(void){
	
	int arr[SIZE];
	int i;
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("Input the value : ");
		scanf("%d" , &arr[i]);
		
		arr[i] = arr[i]*arr[i];
	}
	printf("\nElement\t\tValue\n");
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("%d\t\t%d\n" , i,arr[i]);
	}
	return 0;
}