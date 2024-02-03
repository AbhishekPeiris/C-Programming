#include <stdio.h>
int main(){
	
	int a=5;
	
	do{
		printf("Value of a : %d\n" , a);
		a = a+2;
	}
	while(a<20);
	
	return 0;
}