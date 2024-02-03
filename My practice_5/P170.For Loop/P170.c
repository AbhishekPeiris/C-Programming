#include <stdio.h>
int main(){
	
	int i;
	
	i = 0;
	i <= 10;
	
	/*
	   Infinite for loop ekk unath break; ek thibena nisa eya
	   eka parak pamanak print wee nawathii.
	*/
	
	for(; ;){ 
		printf("Number : %d\n" , i++);
		break;
	}
	return 0;
}
