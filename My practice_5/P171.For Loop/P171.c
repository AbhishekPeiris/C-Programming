#include <stdio.h>
int main(){
	
	int i;
	/*
	  i print weemata upades labi atha. i=0 n aranba wii print wiimen pasuwa ekak wadi kara gani.
	*/
	for(i=0 ; i<=10 ; i++){
		printf("Number : %d\n" , i);
	}
	/*
	  mehi last number eka washayen 11 labe, mokada i++ thebena nisa
	  upades labenuye i ta ekak ekathu kra gena yan lesai. ewita ekak ekathu kara gena 
	  yamedi ym mohotha i=10 we. ewita eya print wiimedi i++ nisa 10 print unath 
	  ilaga statement ek a sadaha i=11 we. eya i<=10 condition ekta walngu nathi nisa
	  for loop eka awasan we. namuth i wenama aragena print keruwothin apata i=11 labe.
	*/
	printf("The Last Number(i) : %d\n" , i);
	
	printf(".............................\n");
	
	int m;
	/*
	  m print weemata uapdes labi atha. emanisa m=0 n aranba wei.
	  inpasu ekak wadi wii print we.
	*/
	for(m=0 ; m<=10 ; ++m){
		printf("Number : %d\n" , m);
	}
	
	printf("The Last Number(m) : %d\n" , m);
	
	printf(".............................\n");
	
	int u;
	/*
	  u=0 arnbawiimat upades labe.u print wee ekak wadi kara ganii.
	*/
	for(u=0 ; u<=10 ;){
		printf("Number : %d\n" , u++);
	}
	
	printf("The Last Number(u) : %d\n" , u);
	
	printf(".............................\n");
	
	int t;
	/*
	  t=0 n aranba karanna yai upades labii athath ++t print wenne yai upades labii athi nisa
	  t ta ekak ekathu wii t print weema siduwe.
	*/
	for(t=0 ; t<=10 ;){
		printf("Number : %d\n" , ++t);
	}
	
	printf("The Last Number(t) : %d\n" , t);
	
	
	return 0;
}
