#include <stdio.h>
int main(){
	
	int Number , Const_Number;
	
	printf("Enter a Number : ");
	scanf(" %d" , &Const_Number);
	
	for(Number=0 ; Number<=Const_Number ; Number++){
		printf("Number :-----> %d\n" , Number);
	}
	return 0;
}
