#include <stdio.h>
int main(){
	
	int a , b;
    a = b;
	
	printf("a == b --> %d\n" , a == b);//1
	printf("a != b --> %d\n" , a != b);//0
	printf("a > b  --> %d\n" , a > b);//0
	printf("a < b  --> %d\n" , a < b);//0
	printf("a >= b --> %d\n" , a >= b);//1
	printf("a <= b --> %d\n" , a <= b);//1
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	char x='X', y='Y';
	x = y;
	
	printf("%c == %c --> %d\n" , x , y , x == y);//1
	printf("%c != %c --> %d\n" , x , y , x != y);//0
	printf("%c > %c  --> %d\n" , x , y , x > y);//0
	printf("%c < %c  --> %d\n" , x , y , x < y);//0
	printf("%c >= %c --> %d\n" , x , y , x >= y);//1
	printf("%c <= %c --> %d\n" , x , y , x <= y);//1
	
	
	
	return 0;
 }
