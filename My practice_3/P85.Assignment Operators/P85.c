#include <stdio.h>
int main(){
	
	int A,B;
	
	printf("Enter A value := ");
	scanf(" %d" , &A);
	
	printf("********************\n");
	
	B = A;
	printf("B = %d\n" , B );
	
	B += A;
	printf("B = %d\n" , B );
	
	B -= A;
	printf("B = %d\n" , B );
	
	B *= A;
	printf("B = %d\n" , B );
	
	B /= A;
	printf("B = %d\n" , B );
	
	B %= A;
	printf("B = %d\n" , B );
	
	return 0;
	
}
