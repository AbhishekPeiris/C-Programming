#include <stdio.h>
//this is the main program
int main(){
	int a=100;
	printf("This value of a variable is %d\n" , a);
	
	//special function that can use to check the memory size sizeof(): this is a number
	printf("This size of a variable is %d\n" , sizeof(a));
	
	// To get the memory address, we have to use '&' mark
	// so i am going to print the address of a varible = '&a'
	
	printf("The address(int) of the a variable is %d\n" , &a);
	printf("The address(Hexa) of the a variable is %x\n" , &a);
	
	printf("\n.........................................................\n");
	
	int b=50;
	printf("This value of b variable is %d\n" , b);
	printf("This size of b variable is %d\n" , sizeof(b));
	printf("The address(int) of the b variable is %d\n" , &b);
	printf("The address(Hexa) of the b variable is %x\n" , &b);
	
	printf("\n.........................................................\n");
	
	int c=250;
	printf("This value of c variable is %d\n" , c);
	printf("This size of c variable is %d\n" , sizeof(c));
	printf("The address(int) of the c variable is %d\n" , &c);
	printf("The address(Hexa) of the c variable is %x\n" , &c);
	
	printf("\n.........................................................\n");
	
	int d=10;	
	printf("This value of d variable is %d\n" , d);
	printf("This size of d variable is %d\n" , sizeof(d));
	printf("The address(int) of the d variable is %d\n" , &d);
	printf("The address(Hexa) of the d variable is %x\n" , &d);
	
	
	
	return  0;
}
