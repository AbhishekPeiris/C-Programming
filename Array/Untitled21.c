#include <stdio.h>
#define SIZE 5

int main(void){
	
	int a[SIZE];
	int i;
	int total = 0;
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("\na[i] = ");
		scanf("%d" , &a[i]);
	}
	for(i=0 ; i<SIZE ; i++){
		
		total += a[i];
	}
	printf("Total of array elements is %d\n" , total);
	
	return 0;
}