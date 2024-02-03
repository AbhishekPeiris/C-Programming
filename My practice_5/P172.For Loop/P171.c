#include <stdio.h>
int main(){
	
	int i;
	
	for(i=0 ; i<=10 ; i++){
		printf("Number : %d\n" , i);
	}

	printf("The Last Number : %d\n" , i++);
	printf("The Last Number : %d\n" , i);
	
	printf(".............................\n");
	
	int m;
	
	for(m=0 ; m<=10 ; ++m){
		printf("Number : %d\n" , m);
	}
	/*
	awasanye m=10 print wii ekk wadi kara ganii. ewita m=11 we. namuth m<=10
	ta nogalapena nisa for loop ek awasn wei. etha danta m=11 we. last number ek lesa
	++m print wenna yai upades laba athi nisa ekak wadi print weema siduwei. ewita m=12 we.
	*/
	printf("The Last Number : %d\n" , ++m);
	
	printf(".............................\n");
	
	int u;
	
	for(u=0 ; u<=10 ;){
		printf("Number : %d\n" , u++);
	}
	
	printf("The Last Number : %d\n" , u++);
	printf("The Last Number : %d\n" , u);
	
	printf(".............................\n");
	
	int t;
	
	for(t=0 ; t<=10 ;){
		printf("Number : %d\n" , ++t);
	}
	
	printf("The Last Number : %d\n" , ++t);
	return 0;
}
