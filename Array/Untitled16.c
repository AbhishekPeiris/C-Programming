#include <stdio.h>
int main(void){
	
	int n[5] = {5 , 12 , 34 , 56 , 23};
	int i;
	
	printf("%s%13s\n" , "Element" , "Value");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%7d%13d\n" , i,n[i]);
	}
	
	return 0;
}