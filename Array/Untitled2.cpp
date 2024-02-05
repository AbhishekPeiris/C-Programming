#include <stdio.h>
int main(void){
	
	int myArray[5];
	
	myArray[0] = 10;
	myArray[1] = 20;
	myArray[2] = 30;
	myArray[3] = 40;
	myArray[4] = 50;
	
	int i;
	
	for(i=0 ; i<5 ;i++){
		
		printf("%d\n" , myArray[i]);
	}
	
	return 0;
}