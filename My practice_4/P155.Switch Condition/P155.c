#include <stdio.h>
int main(){
	
	int m;
	
	// count 1
	
	while(1){
		
		/* C programming wala while loop ekak laba dee athi kondesiyak sathya 
		   wana thak ilakka prakashayak nawatha nawatha kriyathmaka karai.
	    */
	
	    printf("******************************\n");
	    
	    printf("1. Student Registration.\n");
	    printf("2. Student Assingments.\n");
	    printf("3. Student Terminations.\n");
	    printf("4. Exit.\n\n");
	    
	    printf("******************************\n");
	    
	    printf("Select a choice : ");
	    scanf(" %d" , &m);
	    
	    switch(m){
	    	
	    	case 1:{
				break;
			}
			case 2:{
				printf("Handover Assingments.......\n");
				break;
			}
			case 3:{
				printf("Termination Process........\n");
				break;
			}
			case 4:{
				printf("Have a Nice Day\n");
				
				return 0;
				
			  /*
			    case 4 hi printf statement ekata pasuwa break; ek laba dun wita sidu wanne nawatha eya while loop ek thibena
			    nisa repeat weema siduwe. eya nawatha while loop ekata noyamata apata eya awasan karanne yai upades laba diya 
			    uthuya. e sadhaha kala yuththe case 4 hi printf statement ek awasan uu whama ilaga statement eka washayen 
			    return 0 yoda thibiimen ema statement ek excicute wima awasn kala haka. return magin excicute wima awasn karnneyai 
				upades labe. 
			  */
			}
		}
		
	}
	
	    
	   
  	
}
