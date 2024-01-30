#include <stdio.h>
int main(){
	
	int a , b , c;
	a > b;
	c = a;
	
	printf("a == b --> %d\n" , a == b);//0
	printf("a != b --> %d\n" , a != b);//1
	printf("a > b  --> %d\n" , a > b);//1
	printf("a < b  --> %d\n" , a < b);//0
	printf("a >= b --> %d\n" , a >= b);//1
	printf("a <= b --> %d\n" , a <= b);//0
	
    printf("******************\n");
    
    printf("a == c --> %d\n" , a == c);//1
	printf("a != c --> %d\n" , a != c);//0
	printf("a > c  --> %d\n" , a > c);//0
	printf("a < c  --> %d\n" , a < c);//0
	printf("a >= c --> %d\n" , a >= c);//1
	printf("a <= c --> %d\n" , a <= c);//1
	
	printf("******************\n");
	
	printf("c == b --> %d\n" , c == b);//0
	printf("c != b --> %d\n" , c != b);//1
	printf("c > b  --> %d\n" , c > b);//1
	printf("c < b  --> %d\n" , c < b);//0
	printf("c >= b --> %d\n" , c >= b);//1
	printf("c <= b --> %d\n" , c <= b);//0
    
    
	
	
	return 0;
 }
