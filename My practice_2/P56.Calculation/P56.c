#include <stdio.h>
int main(){
	
	float x = 67.f;
	
	printf("(1)--> x = %.2f\n" , x);
	
	x = x+1.6;
	
	printf("(2)--> x = %.2f\n" , x);
	
	x = x+1.f;
	
	printf("(3)--> x = %.2f\n" , x);
	
	x = x+20.65;
	
	printf("(4)--> x = %.2f\n" , x);
	
	x = x+34.f;
	
	printf("(5)--> x = %.2f\n" , x);
	
	x = x+x;
	
	printf("(6)--> x = %.2f\n" , x);
	
	x = x+x+6.78;
	
	printf("(7)--> x = %.2f\n" , x);
	
	x = x+20.543+30.908;
	
	printf("(8)--> x = %.3f\n" , x);
	
	x = 8.67+2.0004;
	
	printf("(9)--> x = %.4f\n" , x);
	
	
	
	
	
	return 0;
}
