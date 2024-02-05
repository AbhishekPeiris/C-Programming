#include <stdio.h>
#define SIZE  5

int main(void){
	
	int array[SIZE];
	int i ,j=1, total = 0;
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("Input number %d : " , j++);
		scanf("%d" , &array[i]);
		
		total = total+array[i];
	}
	printf("\nTotal of all array elements : %d" , total);
	
	return 0;
}