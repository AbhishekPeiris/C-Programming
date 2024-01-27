// C Program to demostrate the working of arithmatic oparators
#include <stdio.h>
int main(){
	
	int a=9 , b=4 , c;
	float s;
	
	c = a+b;
	printf("a+b = %d\n" , c);
	
	c = a-b;
	printf("a-b = %d\n" , c);
	
	c = a*b;
	printf("a*b = %d\n" , c);
	
	c = a/b;
	printf("a/b = %d\n" , c);
	//***************************
	
	s = a/b;
	printf("a/b = %f\n" , s);
	printf("+++++a/b = %f\n" , s);
	printf("a/b+++++ = %f\n" , s);
	printf("-----a/b = %f\n" , s);
	printf("a/b----- = %f\n" , s);
	//***************************
	
	float d;
	
	d=a/b;
	printf("a/b = %f\n" , d);
	printf("a/b = %f\n" , (9.0/4));
	printf("*****a/b = %f\n" , d);
	printf("a/b***** = %f\n" , (9.0/4));
	printf("a/b = %f\n" , (9.f/4.f));
	
/*	d = (float)(9/4);
	printf("float(9/4) = %f\n" , d);
	d = 9.0/4;
*/
	
	c=a%b;// modulo: get remaining value
	printf("Remainder when a divided by b = %d \n",c);
	
	
	
	return 0;
}
