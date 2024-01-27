#include <stdio.h>
int main(){
	
	printf("Fill in the blanks (This/These)\n");
	printf("...........................................");
	
	printf("\n\n");
	
	char A[10];// Answer(1)
	char B[10];// Answer(2)
	char C[10];// Answer(3)
	char D[10];// Answer(4) 
	
	printf("I like __(1)__ T-shirt. It is beautiful\n");
	printf("Answer the 1st blank := ");
	scanf(" %s" , &A);
	
	printf("\n");
	
	printf("I like __(2)__ shoes. They are brown\n");
	printf("Answer the 2nd blank := ");
	scanf(" %S" , &B);
	
	printf("\n");
	
	printf("I like __(3)__ cap. It is nice\n");
	printf("Answer the 3rd blank := ");
	scanf(" %s" , &C);
	
	printf("\n");
	
	printf("I like __(4)__ socks. They are blue\n");
	printf("Answer the 4th blank := ");
	scanf(" %s" , &D);
	
    
    
	
	return 0;
}
