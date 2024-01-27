#include <stdio.h>
int main(){
	
	char A; // Combind Mathamatics Mark
	char B; // Physics Mark
	char C; // Chemistry Mark
	int  D; // Genaral Test Mark
	char E; // Genaral English Mark
	
	/*
	   Here, when the char data type is used, when it is entered
	   and moved to the new line, it is also treated as character.
	   Then when printing we are not allowed to provide the requested
	   data. Therefore a sapce is placed in front of %c. (" %c" / " %d")
	*/
	
	printf("Enter your com.maths marks      := ");  
	scanf(" %c" , &A);
	
	printf("Enter your physics marks        := ");
	scanf(" %c" , &B);
	
	printf("Enter your chemistry            := ");
	scanf(" %c" , &C);
	
	printf("Enter your genaral test mark    := ");
	scanf(" %d" , &D);
	
	printf("Enter your genaral english mark := ");
	scanf(" %c" , &E);


	printf("\n...........................................\n");
	
	printf("Com.Maths       := %c\n" , A);
	printf("Physics         := %c\n" , B);
	printf("Chemistry       := %c\n" , C);
	printf("Genaral Test    := %d\n" , D);
	printf("Genaral English := %c\n" , E);
	
	
	return 0;
	
}
