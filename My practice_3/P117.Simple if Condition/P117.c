#include <stdio.h>
int main(){
	
	int x;
	printf("Enter x value ");
	scanf(" %d" , &x);
	
	if(x > 100){
		printf("Grater than 100\n");
	}
	else{
		printf("Less than 100\n");
	}
	
	printf("The value of x is %d" , x);
	
	return 0;
}
