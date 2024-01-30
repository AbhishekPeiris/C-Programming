// Logical Operators

// C Program to demonstrate the working of logical operators.

#include <stdio.h>
int main(){
	
	int a = 5 , b = 5 , c = 10 , results;
	
	// && --> Logical AND
	results = (a == b) && (c > b);
	printf("(a == b) && (c > b) equal to %d\n\n" , results );//1
	
	results = (a == b) && (c < b);
	printf("(a == b) && (c < b) equal to %d\n\n" , results);//0
	
	printf("--------------------------------\n");
	
	// || --> Logical OR
	results = (a == b) || (c < b);
	printf("(a == b) || (c > b) equal to %d\n\n" , results);//1
	
	results = (a != b) || (c < b);
	printf("(a == b) || (c < b) equal to %d\n\n" , results);//0
	
	printf("--------------------------------\n");
	
	// ! --> Logical NOT
	results = !(a == b);
	printf("!(a == b) equal to %d\n\n" , results);//0
	
	results = !(a != b);
	printf("!(a != b) equal to %d\n\n" , results);//1
	
	return 0;
	
	
}
