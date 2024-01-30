// Find the Odd Number

// Only one of the 3 digits is a odd number

#include <stdio.h>
int main(){
	
	int N1 , N2 , N3 , Odd_Number;
	
	printf("Enter The 1st Number := ");
	scanf(" %d" , &N1);
	
	printf("Enter The 2nd Number := ");
	scanf(" %d" , &N2);
	
	printf("Enter The 3rd Number := ");
	scanf(" %d" , &N3);
	
	if(N1%2 == 1){
		Odd_Number = N1;
	}
	if(N2%2 == 1){
		Odd_Number = N2;
	}
	if(N3%2 == 1){
		Odd_Number = N3;	
	}
	
	printf("The Odd Number is := %d" , Odd_Number);
	
	return 0;
}
