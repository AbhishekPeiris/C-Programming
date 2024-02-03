#include <stdio.h>
int main(){
	
	int a;
	
	printf("Enter the a value : ");
	scanf(" %d" , &a);
	
	do{
		printf("Value of a : %d\n" , a);
		a += 1;
	}
	while(a<20);
	
	return 0;

}