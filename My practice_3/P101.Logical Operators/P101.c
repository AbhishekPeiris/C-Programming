#include <stdio.h>
int main(){
	
	int X = 10 , Y = 10 , Z = 11 , results;
	
	results = (X == Y) && (X != Y);
	printf("(X == Y) && (X != Y) equal to %d\n" , results);//0
	
	printf("\n````````````````````````````````````````\n");
	
	results = (Z == Y) && (X == Y);
	printf("(Z == Y) && (X == Y) equal to %d\n" , results);//0
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	
	results = (X >= Y) || (X >= Z);
	printf("(X >= Y) || (X >= Z) equal to %d\n" , results);//1
	
	printf("\n````````````````````````````````````````\n");
	
	results = (Z < Y) || (Z > Y);
	printf("(Z < Y) || (Z > Y) equal to %d\n" , results);//1
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	
	results = !(X == Y);
	printf("!(X == Y) equal to %d\n" , results);//0
	
	printf("\n````````````````````````````````````````\n");
	
	results = !(Z == Y);
	printf("!(Z == Y) equal to %d\n" , results);//1
	
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}
