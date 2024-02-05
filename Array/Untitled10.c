#include <stdio.h>
int main(void){
	
	char name[4] = {'A' , 'B' , 'H' , 'I'};
	int i;
	
	
	printf("Enter your name : ");
	scanf("%s" , &name[i]);
	
	
	for(i=0 ; i<4 ; i++){
		
		printf("%c" , name[i]);
	}
	return 0;

}