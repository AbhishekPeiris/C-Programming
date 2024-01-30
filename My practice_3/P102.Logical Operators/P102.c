#include <stdio.h>
int main(){
	
	float A = 23.45 , B = 34.56;
    int results;
	
	results = (A < B) && (A == B);
	printf("(A < B) && (A == B) = %d\n" ,  results);//0
	
	results = (A < B) && (A != B);
	printf("(A < B) && (A == B) = %d\n" ,  results);//1
	
	printf("\n|||||||||||||||||||||||||||||||\n");
	
	results = (A < B) || (A == B);
	printf("(A < B) || (A == B) = %d\n" ,  results);//1
	
	results = (A > B) || (A == B);
	printf("(A > B) || (A != B) = %d\n" ,  results);//0
	
	printf("\n|||||||||||||||||||||||||||||||\n");
	
	results = !(A > B);
	printf("(A > B) = %d\n" ,  results);//1
	
	results = !(A < B);
	printf("(A < B) = %d\n" ,  results);//0
	
	return 0;
	
}
