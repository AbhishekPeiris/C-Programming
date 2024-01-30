#include <stdio.h>
int main(){
	
	char a = 'A' , b ='B';
	a != b;
	a > b;
	int results;
	  
	results = (a == b) && (a != b);
	printf("(%c == %c) && (%c != %c) equal to %d\n" , a , b , a , b , results);//0 
	
	results = (a > b) && (a < b);
	printf("(%c > %c) && (%c < %c) equal to   %d\n" , a , b , a , b , results);//0 
	
	printf("\n``````````````````````````````````\n");
	
	results = (a == b) || (a != b);
	printf("(%c == %c) || (%c != %c) equal to %d\n" , a , b , a , b , results);//1  
	
	results = (a > b) || (a < b);
	printf("(%c > %c) || (%c < %c) equal to   %d\n" , a , b , a , b , results);//1 
	
	printf("\n``````````````````````````````````\n");
	
	results = !(a == b);
	printf("!(%c == %c) equal to %d\n" , a , b , results);//1  
	
	results = !(a != b);
	printf("(%c != %c) equal to  %d\n" , a , b , results);//0 
	
	return 0;
	
}
