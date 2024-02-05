#include <stdio.h>
#define SIZE 10

int main(void){
	
	int a[SIZE];
	int j;
	
	for(j=0 ; j<SIZE ; j++){
		
		a[j] = 2+2*j;
			
	}
	printf("%s%13s\n" , "Element" , "Value");
	
	for(j=0 ; j<SIZE ; j++){
		
		printf("%7d%13d\n" , j,a[j]);
	}
	return 0;
}