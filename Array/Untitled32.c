#include <stdio.h>
#define SIZE 5

void modifyArray(int b[] , int j);

int main(void){
	
	int a[SIZE] = {0,1,2,3,4};
	
	modifyArray(a,SIZE);
	
	
	return 0;
	
}
void modifyArray(int b[] , int j){
	
	
	for(j=0 ; j<SIZE ; j++){
		
		b[j]*=2;
		
		printf("%d " , b[j]);
	}
	
	
	
}