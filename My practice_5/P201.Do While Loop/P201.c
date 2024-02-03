#include <stdio.h>
#define NEW_MAX -1

// constant value "NEW_MAX" that can use anywhre

int main(){
	
	int a=10;
	
	do{
		printf("The value of a is = %d\n" , a);
		a -= 1;
	}
	while(a>=NEW_MAX);
	
	return 0;
}