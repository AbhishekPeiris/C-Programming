#include <stdio.h>
int main(void){
	
	int num[5] = {23,67,8,3,24};
	int i;
	
	
	printf("Element\t\tValue\n");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%d\t\t%d\n" , i,num[i]);
	}
	return 0;
	
}