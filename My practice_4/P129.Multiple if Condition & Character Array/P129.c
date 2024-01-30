#include <stdio.h>
int main(){
	
	int Number;
	char Grade;
	
	printf("Enter Number : ");
	scanf(" %d" , &Number);
	
	if(Number >= 35){
		Grade = 'A';
	}
	else{
		Grade = 'B';
	}
	
	printf("Your Grade is %c" , Grade);
	
	return 0;
	
}
