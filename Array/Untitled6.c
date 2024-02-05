#include <stdio.h>
int main(void){
	
	char name[8] = {'A','B','H','I','S','H','E','K'};
	
	int i;
	
	for(i=0 ; i<8 ; i++){
		
		printf("%c" , name[i]);
	}
	return 0;
}