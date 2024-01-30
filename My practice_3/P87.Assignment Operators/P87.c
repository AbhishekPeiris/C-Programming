#include <stdio.h>
int main(){
	
	int a = 10;
	int b;
	
	/*
	  mehidi b sadaha agayak nirdesha kara nomatha, b wa print karanna yai
	  pawasana awathawa salakamu,
	  ehedi b ta a wa ekathu kara e labena agaya b sadaha gena b wa print kirima sidu karanu labai.
	  namuth b sadhaha agayk nomathi nisa b wenuwen kopamana pramanayak labagatha yuthuda yana waga nodani.
	  ema nisa eya 1 k  lesa gena enam b = 1 lesa gena a samaga sudusu gananaya kirima sidu karanu labai.
	  in pasu b sadhaha agayak labenu atha, eya pera awasthawala men e e ganaya kirim walata yodagani.
	*/
	
	b += a;
	printf("b = %d\n" , b);// --> 11
	
	/*
	  dan b = 11 lesa agayak labi atha eya pahatha ganaya kirim walata pera paridima yoda gatha hakiya.
	*/
	
	b -= a;
	printf("b = %d\n" , b);// --> 1
	
	b *= a;
	printf("b = %d\n" , b);// --> 10
	
	b /= a;
	printf("b = %d\n" , b);// --> 1
	
	b %= a;
	printf("b = %d\n" , b);// --> 1
	
	return 0;
}
