/*
 program id an example to understand
   c data type
*/
#include <stdio.h>
// this is the main program
int main(){
	int a;//variable a defined with a data type as integer
	a=100;//initialization of the a variable
	int b=10;//single line definition and initialization
	char c,d,e;//dfined 2 variable
	c=78;
	d=27;
	e='E';
	
	//here i am using the printf function to display
	printf("The value of a variable is %d\n" , a);
	printf("The value of b variable is %d" , b);
	printf("\n");//line seeration
	printf("This value of c variable(char type) is %c\n" , c);
    printf("This value of c variable(int type) is %d\n" , c);
	printf("This value of d variable is %d\n" , d);
	printf("This value of e variable(char type) is %c\n" , e);
	printf("This value of e variable(int type) is %d\n" , e);
	printf("Have a nice day!");
	printf("\n");	
	
	int z=100;
	printf("This value of z variable(char type) is %c\n" , z);
	printf("This value of z variable(int type) is %d\n" , z);
	
	return 0;
}
