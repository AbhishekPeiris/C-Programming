#include <stdio.h>
int main(){
	
	int m;
	char c;
	
	printf("Enter the marks := ");
	scanf(" %d" , &m);
	
	/*
	  pera paridi meheidi if condition ek pamanakma bhavitha kala nohaka.
	  evita compoile errors nomathi namuth run time errors thibe.
	  ehi doshaya washayen : udaharanayak salakamu,
	      m = 80 yai ganimu
		  (1) if condition salakiimedi m >= 75 nisa eya true we. enisa c = A we.
		  namuth mehi (2) if condition ekehi if pamanak anthar gthawana nisa eya replecement condition ekak we.
		  ewita wanuye (2) condition eka true nam c wenuwata B replace we. epariddenma pahalata meya siduwe....

		emanisa doshaya walakwa ganimata "else if" datatype ek bhavitha karanu labai.
		ehidi siduwanuye ; yama condition ekak true nam ethanin pahala condition nosalaka hariii.  
	*/
	
	if(m  >= 75){ // --> (1)
		c = 'A';
	}
	else if(m >= 65){ // --> (2)
		c = 'B';
	}
	else if(m >= 55){ // --> (3)
		c = 'C';
	}
	else if(m >= 35){ // ---> (4)
		c = 'S';
	}
	else{
		c = 'F'; // --> (5)
	}
	
	printf("The Grade is %c" , c);
	
	return 0;
}
