// Find the Positive Number

#include <stdio.h>
int main(){
	
	int N1 , N2 , Positive_Number;
	
	printf("Enter N1 value : ");
	scanf(" %d" , &N1);
	
	printf("Enter N1 value : ");
	scanf(" %d" , &N2);
	
	if(N1 < 0 < N2){
		Positive_Number = N1;
	}
	else{
		Positive_Number = N2;
	}
	
	printf("The Positive Value is : %d" , Positive_Number);
	
	return 0;
}
