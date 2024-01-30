#include <stdio.h>
int main(){
	
	char a='A' , b='B' , c='C';
	a > b;
	c = a;
	
	printf("%c == %c --> %d\n" , a , b , a == b);//0
	printf("%c != %c --> %d\n" , a , b , a != b);//1
	printf("%c > %c  --> %d\n" , a , b , a > b);//1
	printf("%c < %c  --> %d\n" , a , b , a < b);//0
	printf("%c >= %c --> %d\n" , a , b , a >= b);//1
	printf("%c <= %c --> %d\n" , a , b , a <= b);//0
	
    printf("******************\n");
    
    printf("%c == %c --> %d\n" , a , c , a == c);//1
	printf("%c != %c --> %d\n" , a , c , a != c);//0
	printf("%c > %c  --> %d\n" , a , c , a > c);//0
	printf("%c < %c  --> %d\n" , a , c , a < c);//0
	printf("%c >= %c --> %d\n" , a , c , a >= c);//1
	printf("%c <= %c --> %d\n" , a , c , a <= c);//1
	
	printf("******************\n");
	
	printf("%c == %c --> %d\n" , c , b , c == b);//0
	printf("%c != %c --> %d\n" , c , b , c != b);//1
	printf("%c > %c  --> %d\n" , c , b , c > b);//1
	printf("%c < %c  --> %d\n" , c , b , c < b);//0
	printf("%c >= %c --> %d\n" , c , b , c >= b);//1
	printf("%c <= %c --> %d\n" , c , b , c <= b);//0
    
    
	
	
	return 0;
 }
