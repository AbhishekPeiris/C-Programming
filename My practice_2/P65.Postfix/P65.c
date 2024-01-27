// Postfix
#include <stdio.h>
int main(){
	
	int a = 10;
	
	printf("(1)--> a = %d\n" , a);//10
	
	// Postfix Decrement
	
	a--;
	
	printf("(2)--> a = %d\n" , a);//9
	printf("(3)--> a = %d\n" , a--);//9
	printf("(4)--> a = %d\n" , a);//8
	
	
	return 0;
}
