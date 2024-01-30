// Multiple if Condition

// find the largest value when having 3 numbers
#include <stdio.h>
int main(){
	
	// define 3 numbers
	int N1 , N2 , N3 , MaxHolder;
	
	// get three numbers
	printf("Enter number 01 := ");
	scanf(" %d" , &N1);
	
	printf("Enter number 02 := ");
	scanf(" %d" , &N2);
	
	printf("Enter number 03 := ");
	scanf(" %d" , &N3);
	
	// check first two numbers
	if(N1 > N2){
		MaxHolder = N1;
	}
	else{
		MaxHolder = N2;
	}
	if(MaxHolder < N3){
		MaxHolder = N3;
	}
	
	printf("The Max value is := %d" , MaxHolder);
	
	
	return 0;
	
}


