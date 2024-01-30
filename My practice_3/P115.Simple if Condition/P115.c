#include <stdio.h>
int main(){
	
	int A = 10 ,  B = 12;
	int X , Y;
	
	printf("Enter X value : ");
	scanf(" %d" , &X);
	
	printf("Enter Y value : ");
	scanf(" %d" , &Y);
	
	printf("\n.......................\n");
	
	if(X != A){
		printf("X not equal to A\n");
	}
	else{
		printf("X eqaul to A and not eqaul to B\n");
	}
	if(X == B){
		printf("X eqaul to B\n");
	}
	
	printf("\n.......................\n");
	
	if(Y != A){
		printf("X not equal to A\n");
	}
	else{
		printf("X eqaul to A and not eqaul to B\n");
	}
	if(Y == B){
		printf("X eqaul to B\n");
		
    }return 0;
}

