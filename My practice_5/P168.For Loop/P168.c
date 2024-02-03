#include <stdio.h>
int main(){
	
	int i;
	
	for(i=0 ; i<=10 ; i++){
		printf("Number : %d\n" , i);
	}
	printf("**************************\n");
	
	i = 0;
	
	for(; i<=10 ; i++){
		printf("Number : %d\n" , i);
	}
	printf("**************************\n");
	
	i = 0;
	
	for(; i<=10 ;){
		printf("Number : %d\n" , i++);
	}
	printf("**************************\n");
	
	
	return 0;
}
