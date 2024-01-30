#include <stdio.h>
int main(){
	
	int a , b , results;
	a > b;
    
	results  = (a == b);
	printf("a == b --> %d\n" , results );//0
	
	results  = (a != b);
	printf("a != b --> %d\n" , results);//1
	
	results  = (a > b);
	printf("a > b  --> %d\n" , results);//1
	
	results  = (a < b);
	printf("a < b  --> %d\n" , results);//0
	
	results  = (a >= b);
	printf("a >= b --> %d\n" , results);//1
	
	results  = (a <= b);
	printf("a <= b --> %d\n" , results);//0
	
	
	return 0;
 }
