#include <stdio.h>

int main(){
	
	int Number;
	char Grade[10];
	
	printf("Enter Number : ");
	scanf(" %d" , &Number);
	
	if(Number >= 35){
		Grade[10] = {'A','','p','a','s','s'};
	}
	else{
		Grade[10] = {'B','','p','a','s','s'};
	}
	
	printf("Your Grade is %s\n" , Grade);
	
	
	return 0;
	
}
