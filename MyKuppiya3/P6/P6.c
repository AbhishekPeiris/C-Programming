// What will be the output of following program?

#include <stdio.h>

void main(){
	
	const char var = 'A';
	
	++var; // <---- integer type mathamatical calculation only
	
	printf("%c" , var);
}