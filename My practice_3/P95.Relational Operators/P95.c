#include <stdio.h>
int main(){
	
	int a , b , c , d , e;
	a > b;
	c = a;
	d != a , d < b;
	e >= a;
	
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
	
	printf("a == d --> %d\n" , a == d);//0
	printf("a != d --> %d\n" , a != d);//1
	printf("a > d  --> %d\n" , a > d);//1
	printf("a < d  --> %d\n" , a < d);//0
	printf("a >= d --> %d\n" , a >= d);//1
	printf("a <= d --> %d\n" , a <= d);//0
	
	printf("******************\n");
    
    printf("a == e --> %d\n" , a == e);//1
	printf("a != e --> %d\n" , a != e);//1
	printf("a > e  --> %d\n" , a > e);//0
	printf("a < e  --> %d\n" , a < e);//1
	printf("a >= e --> %d\n" , a >= e);//1
	printf("a <= e --> %d\n" , a <= e);//1
	
	printf("******************\n");
	
	printf("c == b --> %d\n" , d == b);//0
	printf("c != b --> %d\n" , d != b);//1
	printf("c > b  --> %d\n" , d > b);//1
	printf("c < b  --> %d\n" , d < b);//0
	printf("c >= b --> %d\n" , d >= b);//1
	printf("c <= b --> %d\n" , d <= b);//0
	
	printf("******************\n");
	
	printf("c == b --> %d\n" , c == b);//0
	printf("c != b --> %d\n" , c != b);//1
	printf("c > b  --> %d\n" , c > b);//1
	printf("c < b  --> %d\n" , c < b);//0
	printf("c >= b --> %d\n" , c >= b);//1
	printf("c <= b --> %d\n" , c <= b);//0
	
	printf("******************\n");
	
	printf("e == b --> %d\n" , e == b);//0
	printf("e != b --> %d\n" , e != b);//1
	printf("e > b  --> %d\n" , e > b);//1
	printf("e < b  --> %d\n" , e < b);//0
	printf("e >= b --> %d\n" , e >= b);//1
	printf("e <= b --> %d\n" , e <= b);//0
	
	printf("******************\n");
	
	printf("c == b --> %d\n" , c == d);//0
	printf("c != b --> %d\n" , c != d);//1
	printf("c > b  --> %d\n" , c > d);//1
	printf("c < b  --> %d\n" , c < d);//0
	printf("c >= b --> %d\n" , c >= d);//1
	printf("c <= b --> %d\n" , c <= d);//0
	
	printf("******************\n");
	
	printf("c == e --> %d\n" , c == e);//1
	printf("c != e --> %d\n" , c != e);//1
	printf("c > e  --> %d\n" , c > e);//0
	printf("c < e  --> %d\n" , c < e);//1
	printf("c >= e --> %d\n" , c >= e);//1
	printf("c <= e --> %d\n" , c <= e);//1
	
	printf("******************\n");
	
	printf("c == b --> %d\n" , e == d);//0
	printf("c != b --> %d\n" , e != d);//1
	printf("c > b  --> %d\n" , e > d);//1
	printf("c < b  --> %d\n" , e < d);//0
	printf("c >= b --> %d\n" , e >= d);//1
	printf("c <= b --> %d\n" , e <= d);//0
    
    
	return 0;
 }
