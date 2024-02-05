#include <stdio.h>
#define SIZE 12

int main(void){
	
	int row,column;
	int a[2][3];
	int total = 0;
	
	for(row=0 ; row<=1 ; ++row){
		
		for(column=0 ; column<=2 ; ++column){
		
			printf("\na[row][column] = " , row,column);
			scanf("%d" , &a[row][column]);
		}
	}
	for(row=0 ; row<=1 ; ++row){
		
		for(column=0 ; column<=2 ; ++column){
			
			total+=a[row][column];
		}
	}
	printf("The total of the elements of the array : %d" , total);
	
	return 0;
}