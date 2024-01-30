#include <stdio.h>
int main(){
	
	int x;
	
	printf("Enter a Number : ");
	scanf(" %d" , &x);
	
	printf("The Address of x is %d\n" , &x);
	
	//getch(x); := user wisin upadesak labadena thuru radi sitii
	if(x < 20){
		printf("Less than 20\n");
		printf("Hi\n");
    }
	else{
	
	    printf("Grater than 20");
   
    }	
	return 0;	
	
	
}
