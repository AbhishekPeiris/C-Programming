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
	printf("The address(string) of the a variable is %s\n" , &a);
	printf("The address(char) of the a variable is %c\n" , &a);
	printf("The address(Hexa) of the a variable is %x\n" , &a);
	
	return  0;
}
