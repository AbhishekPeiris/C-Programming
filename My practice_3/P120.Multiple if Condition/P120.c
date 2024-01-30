// Find the min value

#include <stdio.h>
int main(){
	
	int N1 , N2 , N3 , Min_Number;
	
	printf("Enter N1 value | ");
	scanf(" %d" , &N1);
	
	printf("Enter N2 value | ");
	scanf(" %d" , &N2);
	
	printf("Enter N3 value | ");
	scanf(" %d" , &N3);
	
	if(N1 < N2){
		Min_Number = N1;
	}
	else{
		Min_Number = N2;
	}
	if(Min_Number > N3){
		Min_Number = N3;
	}
	 
	printf("The min value is | %d" , Min_Number);
	
	return 0; 
}
