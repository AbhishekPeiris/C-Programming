#include <stdio.h>
int main(){
	
	float a = 12.5;
	float b;
	
	b = a;
	printf("b = %.2f\n" , b);
	
	b += a;
	printf("b = %.2f\n" , b);
	
	b -= a;
	printf("b = %.2f\n" , b);
	
	b *= a;
	printf("b = %.2f\n" , b);
	
	b /= a;
	printf("b = %.2f\n" , b);
	
	// % meya float sadaha invalid(walangu nowe) we. binary(int) sankya pamanak yoda gatha yuthu we.
	
   /* b %= a;
    printf("b = %.2f\n" , b);
   */ 
	
	return 0; 
}
