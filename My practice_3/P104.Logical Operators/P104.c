#include <stdio.h>
int main(){
	
	int A = 5 , B = 10 , results;
	
	char R1[] = "(A == B)";
	char R2[] = "(A != B)";
	
	char R3[] = "(A > B)";
	char R4[] = "(A < B)";
	
	results = (A == B) && (A != B);
	printf("%s && %s equal to %d\n" , R1 , R2 , results);
	printf("%s && %s equal to %d\n" , R3 , R4 , results);
	
	results = (A > B) && (A < B);
	printf("%s && %s equal to %d\n" , R1 , R2 , results);
	printf("%s && %s equal to %d\n" , R3 , R4 , results);
	
	printf("\n++++++++++++++++++++++++\n");
	
	results = (A == B) || (A != B);
	printf("%s || %s equal to %d\n" , R1 , R2 , results);
	printf("%s || %s equal to %d\n" , R3 , R4 , results);
	
	results = (A > B) || (A < B);
	printf("%s || %s equal to %d\n" , R1 , R2 , results);
	printf("%s || %s equal to %d\n" , R3 , R4 , results);
	
	return 0;
	
}


