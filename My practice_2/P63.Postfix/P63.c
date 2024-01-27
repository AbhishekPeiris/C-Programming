// Postfix
#include <stdio.h>
int main(){
	
	int a = 10;
	
	printf("(1)--> a = %d\n" , a);//10

	// Postfix Increment
	  
	a++;                                 /* a = a++ yai sadhahan kirima waradiya. mokada a vadikarana lesa upades
	                                        laba dee thibunath eya kopamana pramanayakin wadanna one dai sadhahn kra nomathi
	                                        nisa ema upadesa pili nogani. namuth a++ lesa sadhahan kara thibiyade a ta 1 k wadi 
	                                        kra ganna lesa therum gani.
	                                     */
	printf("(2)--> a = %d\n" , a);//11
	
	printf("(3)--> a = %d\n" , a++);//11 
	                                      /*mehidi, a print kara pasuwa a ta 1 k wadi kara ganna lesa upades labe.
	                                        ewita pasuwa a print karana awasthawedi a ta 1 k wadi wee print we.
	                                     */
	printf("(4)--> a = %d\n" , a);//12
	
	return 0;                                     
	                                      
	
	
}
