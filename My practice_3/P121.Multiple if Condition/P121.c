// Find the negative number

// Only one of the 3 digits is a negative number

#include <stdio.h>
int main(){
	
	int N1 , N2 , N3 , Negative_Number;
	
	printf("Enter N1 value := ");
	scanf(" %d" , &N1);
	
	printf("Enter N2 value := ");
	scanf(" %d" , &N2);
	
	printf("Enter N3 value := ");
	scanf(" %d" , &N3);
	
	if(N1 < 0){
		Negative_Number = N1;
	}
	if(N2 < 0){
		Negative_Number = N2;
	}
	if(N3 < 0){
		Negative_Number = N3;
	}
	
	printf("The Negative Number is := %d" , Negative_Number);
	
	return 0; 
}
