#include <stdio.h>
#define SIZE 5

int main(void){
	
	char string[SIZE];
	int i;
	
	for(i=0 ; i<SIZE ; i++){
		
		printf("Input Character : ");
		scanf(" %c" , &string[i]);
	}
	for(i=0 ; i<SIZE && string[i]!='\0' ; i++){
		
		printf("%c" , string[i]);
	}
	return 0;
	
}