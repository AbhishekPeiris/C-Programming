#include <stdio.h>
int main(){
	
	int A , B , results;
	
	printf("Enter A value := ");
	scanf(" %d" , &A);
	
	printf("Enter B value := ");
	scanf(" %d" , &B);
	
	printf("\n.....................\n");
	
	results = (A == B) && (A != B);
	printf("(A == B) && (A != B) equal to  %d\n" , results);
	
	results = (A > B) && (A < B);
	printf("(A > B) && (A < B) equal to    %d\n" , results);
	
	results = (A >= B) && (A <= B);
	printf("(A >= B) && (A <= B) equal to  %d\n" , results);
	
	printf("\n.....................\n");
	
	results = (A == B) || (A != B);
	printf("(A == B) || (A != B) equal to  %d\n" , results);
	
	results = (A > B) || (A < B);
	printf("(A > B) || (A < B) equal to    %d\n" , results);
	
	results = (A >= B) || (A <= B);
	printf("(A >= B) || (A <= B) equal to  %d\n" , results);
	
	printf("\n.....................\n");
	
	results = !(A == B);
	printf("!(A == B) equal to %d\n" , results);
	
	results = !(A != B);
	printf("!(A != B) equal to %d\n" , results);
	
	results = !(A > B);
	printf("!(A > B) equal to  %d\n" , results);
	
	results = !(A < B);
	printf("!(A < B) equal to  %d\n" , results);
	
	results = !(A >= B);
	printf("!(A >= B) equal to %d\n" , results);
	
	results = !(A <= B);
	printf("!(A <= B) equal to %d\n" , results);
	
	return 0;
	
	
}
