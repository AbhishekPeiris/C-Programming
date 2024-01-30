// Assignment Operators

#include <stdio.h>
int main(){
	
	int a = 5;
	int c;
	
	c = a;
	printf("c = %d\n" , c);//5
	
	// c+ = a meya waradiya. meya c += a lesa niruupanaya kala yuthuya
	
	c += a;  // c =  c+a
	printf("c = %d\n" , c);//10
	
	c -= a;  // c = c-a
	printf("c = %d\n" , c);//5
	 
	c *= a;  // c = c*a
	printf("c = %d\n" , c);//25
	
	c /= a;  // c = c/a
	printf("c = %d\n" , c);//5
	
	c %= a;  // c = c%a
	printf("c = %d\n" , c);//0
	
	
	return 0;
}
