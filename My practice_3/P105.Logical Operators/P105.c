#include <stdio.h>
int main(){
	
	int a , b , results;
	a != b;
	a > b;
	  
	results = (a == b) && (a != b);
	printf("(a == b) && (a != b) equal to %d\n" , results);//0 
	
	results = (a > b) && (a < b);
	printf("(a > b) && (a < b) equal to   %d\n" , results);//0 
	
	printf("\n``````````````````````````````````\n");
	
	results = (a == b) || (a != b);
	printf("(a == b) || (a != b) equal to %d\n" , results);//1  
	
	results = (a > b) || (a < b);
	printf("(a > b) || (a < b) equal to   %d\n" , results);//1 
	
	printf("\n``````````````````````````````````\n");
	
	results = !(a == b);
	printf("!(a == b) equal to %d\n" , results);//1  
	
	results = !(a != b);
	printf("(a != b) equal to  %d\n" , results);//0 
	
	return 0;
	
}
