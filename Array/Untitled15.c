#include <stdio.h>
int main(void){
	
	char name[100];
	int i;
	
	for(i=0 ; i<5 ; i++){
		
		printf("Enter your name : ");
		scanf("%s" , &name[i]);
	}
	printf("\n");
	
	for(i=0 ; i<5 ; i++){
		
		printf("%s\n" , name[i]);
	}
	return 0;
}